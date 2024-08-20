# Task 0

1. What is the f->id variable used for in BookSim? How is it different from f->pid? (Hint: look 
into the difference between flit and packet. See Figure 12.2 in Dally’s textbook)

A: f->id refers to flit id while f->pid refers to packet id. Packet can be composed of multiple flits.

2. When packet_size is set to 1, each flit will have the same f->id and f->pid. Why? (Hint: 
the packet size can be configured from the configuration file)

A: Packet size of 1 means each packet is composed of 1 flit.

3. When packet_size is set to a value larger than 1, each flit will have different f->id and 
f->pid. Why? (Hint: try to print the f->id and f->pid values when the flit is generated at 
the traffic manager.)

A: Each packet is consist of multiple flits.

# Task 1

1. Please refer Equation 3.11 in Section 3.3.2 of Dally’s textbook. Fill in the value for the variables below.

Equation 3.11: $$T_0 = H_{min}t_r + \frac{D_{min}}{v} + \frac{L}{b}$$
$$T_r=H_{min}t_r, \, T_w = \frac{D_{min}}{v}$$
$T_0$: zero-load latency, $H_{min}$: average hop count, $t_r$: average router delay, $D_{min}$: average distance, $v$: propagation delay, $L$: packet size, $b$: channel bandwidth

| Variable |             Definition             |  Value  |
|:--------:|:----------------------------------:|:-------:|
|   $t_r$  |     Latency of a single router     |    3    |
|   $T_w$  |     Latency of a single channel    |    1    |
|   $N_r$  |  Total number of traversed routers | 1.93717 |
|   $N_w$  | Total number of traversed channels | 2.93717 |

# Task 2

1. Using the values obtained from table 1, count (by hand) your expected zero-load latency for a 8node 1D torus.

A:
average hop count: 2.98263 (measured)
average link number: 3.98263

$3 \times 2.98263 + 1 \times 3.98263 = 12.93052$


2. Compare your expected zero-load latency with the BookSim result. Are they the same?

A: BookSim result: 13.3832

0.45268 difference.