mkdir -p ./ugal-16-256

for i in $(seq 0.025 0.025 1.000)
do
    ../../booksim2/src/booksim ../../booksim2/src/examples/flatflyconfig routing_function=ugal traffic=bitcomp injection_rate={$i} c=16 k=16 x=16 xr=16 sim_type=latency seed=1 > ./ugal-16-256/latency_adv_ff_${i} &
    ../../booksim2/src/booksim ../../booksim2/src/examples/flatflyconfig routing_function=ugal traffic=uniform injection_rate={$i} c=16 k=16 x=16 xr=16 sim_type=latency seed=1 > ./ugal-16-256/latency_uni_ff_${i} &
done