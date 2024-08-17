#!/bin/bash# Check if an argument is provided

if [ -z "$1" ]; then
    echo "Usage: $0 <config_name>"
    exit 1
fi
# Assign the argument to a variable
#flatflyconfig, torus18
CONFIG_NAME=$1 # Run the BookSim2 command with the specified config file
../../booksim2/src/booksim ../../booksim2/src/examples/$CONFIG_NAME injection_rate=0.025 traffic=uniform
