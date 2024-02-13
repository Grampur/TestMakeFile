#!/bin/bash

# Compile the program using the Makefile
make

# Run the program with input00.txt and save the output to a temporary file
./a.out < input/input00.txt > temp_output.txt

# Compare the output with output00.txt
if cmp -s temp_output.txt output/output00.txt; then
    echo "Test Passed: Output matches expected output"
else
    echo "Test Failed: Output does not match expected output"
fi

# Clean up: remove the compiled program and temporary output file
make clean
rm temp_output.txt