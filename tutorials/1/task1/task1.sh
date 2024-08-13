for i in $(seq 0.025 0.025 1.000)
do
    ../../../booksim2/src/booksim ../../../booksim2/src/examples/flatflyconfig sim_type=latency traffic=uniform injection_rate={$i} > ./latency_uni_ff_${i}
done