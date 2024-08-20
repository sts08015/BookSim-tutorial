#!/bin/bash# Check if an argument is provided

if [ -z "$1" ]; then
    echo "Usage: $0 <config_name>"
    exit 1
fi

for i in $(seq 0.025 0.025 1.000)
do
    grep "Packet latency average" ./$1/latency_$2_ff_${i} | grep sample | awk '{print $5}'
done