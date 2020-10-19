#!/bin/bash
crypted="31550 27463810"
decrypt=(Y A B H R P T I D)
zero="0"
for i in {0..8}
do
    for _ in {0..60}
    do
        echo -ne "${crypted//$i/$zero}\r"
        if [[ $zero == "9" ]]; then
            zero="0"
        else
            zero=$((zero + 1))
        fi
        sleep 0.01
    done
    echo -ne "$crypted\r"
    crypted="$(echo "$crypted" | sed "s/${i}/${decrypt[i]}/g" | sed "s/*./\L&/g")"
done
echo "$crypted"