#!/bin/bash

echo "Checking C++ programs..."
echo "========================"

correct_count=0
total_count=6

# If a specific file is passed, extract its number
if [ $# -eq 1 ]; then
    filename=$1
    if [[ $filename =~ question([0-9]+)\.cpp ]]; then
        start=${BASH_REMATCH[1]}
        end=$start
        total_count=1
    else
        echo "❌ Invalid file name. Use questionN.cpp (e.g., question2.cpp)"
        exit 1
    fi
else
    start=1
    end=6
fi

for i in $(seq $start $end)
do
    src="question$i.cpp"
    exe="question$i.out"
    input="test_data/input$i.txt"
    output="output$i.txt"
    expected="test_data/outputA$i.txt"

    echo "Processing $src ..."

    # Compile
    g++ -std=c++17 -o $exe $src
    if [ $? -ne 0 ]; then
        echo "❌ Compilation failed for $src"
        continue
    fi

    # Run with input and save output
    ./$exe < $input > $output

    # Compare with expected output
    if diff -q $output $expected > /dev/null; then
        echo "✅ Test $i Passed"
        ((correct_count++))
    else
        echo "❌ Test $i Failed"
        echo "   Differences:"
        diff $output $expected
    fi

    # Cleanup intermediate files
    rm -f $exe $output

    echo
done

echo "Summary: $correct_count / $total_count tests passed."
