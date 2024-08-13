for i in $(seq 0.025 0.025 1.000)
do
    grep "Packet latency average" ./latency_uni_ff_${i} | grep sample | awk '{print $5}'
done