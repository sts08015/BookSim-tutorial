1. As larger channel latency is used, the zero-load latency also increases. Why is this the case? (Hint: the average packet latency at very low load, e.g., <0.025, is a good estimate of the zero-load latency)

A: When there is very low load, the average packet latency is rarely affected by congestion. Thus, average packet latency is mostly affected by the channel latency and since it is a good estimate of the zero-load latency, zero-load latency increases as larger channel latency is used.

2. For both 1D and 2D Flattened Butterfly, we increased the channel latency from 1 to 50 cycles. However, you will notice that the increase in zero-load latency is higher in 2D than 1D Flattened Butterfly, even though the increase in channel length is exactly the same. Why is this the case?

A: Assuming channel latency is agnostic to the channel length (use_noc_latency=0) and considering uniform traffic pattern, the average hop count is larger in 2D flattened butterfly topology than that of 1D. 