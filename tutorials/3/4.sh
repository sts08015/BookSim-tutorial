mkdir -p ./4-16

for i in $(seq 0.025 0.025 1.000)
do
    ../../booksim2/src/booksim ../../booksim2/src/examples/flatflyconfig traffic=bitcomp injection_rate={$i} c=4 k=4 x=4 xr=4 sim_type=latency seed=1 > ./4-16/latency_adv_ff_${i} &
done