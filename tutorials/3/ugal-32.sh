mkdir -p ./ugal-32-1024

for i in $(seq 0.025 0.025 1.000)
do
    ../../booksim2/src/booksim ../../booksim2/src/examples/flatflyconfig routing_function=ugal traffic=bitcomp injection_rate={$i} c=32 k=32 x=32 xr=32 sim_type=latency seed=1 > ./ugal-32-1024/latency_adv_ff_${i} &
    ../../booksim2/src/booksim ../../booksim2/src/examples/flatflyconfig routing_function=ugal traffic=uniform injection_rate={$i} c=32 k=32 x=32 xr=32 sim_type=latency seed=1 > ./ugal-32-1024/latency_uni_ff_${i} &
done