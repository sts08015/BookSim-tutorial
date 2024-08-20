mkdir -p ./32-1024

for i in $(seq 0.025 0.025 1.000)
do
    ../../booksim2/src/booksim ../../booksim2/src/examples/flatflyconfig traffic=bitcomp injection_rate={$i} c=32 k=32 x=32 xr=32 sim_type=latency > ./32-1024/latency_adv_ff_${i} &
done