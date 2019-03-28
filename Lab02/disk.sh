
##!/bin/bash
#
#if [ $# -ne 1 ]; then
#    echo "Please pass a number, e.g., 90"
#    exit 1
#fi
#
#percentage=`df | grep sda1 | grep -o '[0-9]\{1,3\}%'`
#
#p=${percentage%?}
#
#echo "The percentage is $percentage"
#if [[ $p -gt $1 ]]; then
#    echo Using too much space!!!
#fi

#!/bin/bash

if [ $# -ne 1 ]; then
echo "Must enter number as a arg"
exit 1
fi

percent=`df | grep sda1 | grep -o '[0-9]\{1,3\}%'`

p=${percent%?}

echo "Percent = $percent"
if [[ $p -gt $1 ]]; then
echo "Overflow space :( "
fi
