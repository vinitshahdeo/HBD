#!/bin/bash

# RUN bash happy_birthday.sh <number to repeat>

CODE="SGFwcHkgQmlydGhkYXkh"
DECODE=`echo $CODE | base64 --decode`
MAX="10"

# IF EXECUTE WITH NUMBER, THIS IS MAX VALUE FOR REPEAT.
if [ ! -z "${1##*[!0-9]*}" ]; then
    MAX=$1
fi

for ((i=0; i<$MAX; i++)); do
    for (( j=0; j<${#DECODE}; j++ )); do
        sleep 0.5
        if [ $(($j%2)) = 0 ]; then
            echo -en "\e[1m\e[35m${DECODE:$j:1}"
        else
            echo -en "\e[1m\e[36m${DECODE:$j:1}"
        fi
        
    done
    echo -en "\n"
done