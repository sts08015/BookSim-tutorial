# Task 0
1. Minimal routing is the ideal routing for uniform random traffic. Why?

A: Since traffic is evenly distributed, taking shortest path ensures minimizing latency and congestion.

2. Non-minimal / Valiant routing is the ideal routing for adversarial traffic. Why?

A: Adversarial traffic refers to a kind of traffic which is deliberatley skewed which results in port/channel contention when minimal routing is chosen. However, Valiant's routing algorithm balances the load of a given traffic pattern by sending each packet to a random destination before routing the packet to the final destination. 

3. What is the ideal throughput for uniform random traffic and adversarial traffic?

A: The ideal throughput for uniform random traffic is huihiuhiuhi. Whereas the ideal throughput for adversarial traffic is jihoihohioo.

4. In non-minimal routing, the intermediate node is chosen randomly. Why?

A: To spread traffic across the network evenly. However, this comes with an expense of the locality. (Even if source and destination is adjacent, the packet should be routed to the intermediate node.)

5. What is the adversarial traffic for a 1D Flattened Butterfly topology? Define as an equation as 
shown in Table 3.1 in Dally’s textbook. (Hint: an adversarial traffic is a traffic that causes the 
largest bottleneck, hence reducing the ideal throughput. Refer to Section 3.3 of Dally’s textbook).

A: One exmample of an adversarial traffic on a 1D Flattened Butterfly topology could be traffic that all nodes connected to a particular router sending its packets to the same router so that the routes share the same inter-router channel. This can be implemented by adopting "bit complement traffic": $d_i = \neg s_{i}$

# Task 1

1. Simulate a 16-router, 256-nodes 1D Flattened Butterfly node (please adjust the value of k, c, n, 
x, y, xr, and yr accordingly). Run minimal routing on adversarial traffic. What is the saturation 
throughput (Hint: plot the latency-throughput graph)? Is it far from the ideal throughput?

A: The cycle exceeds 500 cycles at 0.275 injection rate (packets per flit cycle). IS IT FAR FROM THE IDEAL THROUGHPUT?

2. Similar with question 1, we will run minimal routing on adversarial traffic but on a 4-router, 16-
nodes 1D Flattened Butterfly. Is the saturation throughput higher/lower than the configuration 
in Question 1? Why?

A: Saturation point is higher than 16-routers setting. The more nodes connected to a router, the more contention happens.

3. Similar with question 1 and 2 but try with a 32-router, 1024-node 1D Flattened Butterfly. How 
does the saturation throughput compare (higher/lower) with question 1 and 2? Why? 

A: Reaches saturation point the earliest. (lowest saturation point) The more nodes connected to a router, the more contention happens.

# Task 2
1. How does UGAL work? How does it decide when to route minimally or non-minimally?

A: 

2. Run the simulation on a 16-router, 256-nodes 1D Flattened Butterfly. What is the saturation throughput achieved by UGAL for minimal and adversarial traffic? Does it approach the ideal saturation throughput for both traffics?

A: 

3. Do you think the performance of UGAL will be affected if it is run on different network sizes (16-nodes and 1024-nodes 1D Flattened Butterfly).

A: 