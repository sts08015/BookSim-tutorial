void IQRouter::_InternalStep( ) 
#ifdef SINGLE_CYCLE 
{ 
  if(!_active) { 
    return; 
  } 
 
  _InputQueuing( ); 
 
  bool activity = !_proc_credits.empty(); 
 
  if(!_route_vcs.empty()){ 
    _RouteEvaluate( ); 
  } 
 
  if(!_route_vcs.empty()) { 
    _RouteUpdate( ); 
    activity = activity || !_route_vcs.empty(); 
  } 
 
  if(_vc_allocator) { 
    _vc_allocator->Clear(); 
    if(!_vc_alloc_vcs.empty()){ 
      _VCAllocEvaluate( ); 
    } 
  } 
 
  if(!_vc_alloc_vcs.empty()) { 
    _VCAllocUpdate( ); 
    activity = activity || !_vc_alloc_vcs.empty(); 
  } 
 
  if(_hold_switch_for_packet) { 
    if(!_sw_hold_vcs.empty()){ 
      _SWHoldEvaluate( ); 
    } 
  } 
 
  if(_hold_switch_for_packet) { 
if(!_sw_hold_vcs.empty()) { 
      _SWHoldUpdate( ); 
      activity = activity || !_sw_hold_vcs.empty(); 
    } 
  } 
 
  _sw_allocator->Clear(); 
  if(_spec_sw_allocator) 
    _spec_sw_allocator->Clear(); 
 
 
  if(!_sw_alloc_vcs.empty()){ 
    _SWAllocEvaluate( ); 
  } 
 
  if(!_sw_alloc_vcs.empty()) { 
    _SWAllocUpdate( ); 
    activity = activity || !_sw_alloc_vcs.empty(); 
  } 
 
  if(!_crossbar_flits.empty()){ 
    _SwitchEvaluate( ); 
  } 
 
  if(!_crossbar_flits.empty()) { 
    _SwitchUpdate( ); 
    activity = activity || !_crossbar_flits.empty(); 
  } 
 
  _active = activity; 
 
  _OutputQueuing( ); 
 
  _bufferMonitor->cycle( ); 
  _switchMonitor->cycle( ); 
} 
 
#else 
{ 
  if(!_active) { 
    return; 
  } 
 
  _InputQueuing( ); 
  bool activity = !_proc_credits.empty(); 
 
  if(!_route_vcs.empty()) 
    _RouteEvaluate( ); 
  if(_vc_allocator) { 
    _vc_allocator->Clear(); 
    if(!_vc_alloc_vcs.empty()) 
      _VCAllocEvaluate( ); 
  } 
  if(_hold_switch_for_packet) { 
    if(!_sw_hold_vcs.empty()) 
      _SWHoldEvaluate( ); 
  } 
  _sw_allocator->Clear(); 
  if(_spec_sw_allocator) 
    _spec_sw_allocator->Clear(); 
  if(!_sw_alloc_vcs.empty()) 
    _SWAllocEvaluate( ); 
  if(!_crossbar_flits.empty()) 
    _SwitchEvaluate( ); 
 
  if(!_route_vcs.empty()) { 
    _RouteUpdate( ); 
    activity = activity || !_route_vcs.empty(); 
  } 
  if(!_vc_alloc_vcs.empty()) { 
    _VCAllocUpdate( ); 
    activity = activity || !_vc_alloc_vcs.empty(); 
  } 
  if(_hold_switch_for_packet) { 
    if(!_sw_hold_vcs.empty()) { 
      _SWHoldUpdate( ); 
      activity = activity || !_sw_hold_vcs.empty(); 
    } 
  } 
  if(!_sw_alloc_vcs.empty()) { 
    _SWAllocUpdate( ); 
    activity = activity || !_sw_alloc_vcs.empty(); 
  } 
  if(!_crossbar_flits.empty()) { 
    _SwitchUpdate( ); 
    activity = activity || !_crossbar_flits.empty(); 
  } 
 
  _active = activity; 
 
  _OutputQueuing( ); 
 
  _bufferMonitor->cycle( ); 
  _switchMonitor->cycle( ); 
} 
#endif