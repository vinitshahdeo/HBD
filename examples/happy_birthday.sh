#!/bin/bash

for clbg in {40..47} {100..107} 49 ; do
	for clfg in {30..37} {90..97} 39 ; do
		for attr in 0 1 2 4 5 7 ; do
			echo -en "\e[${attr};${clbg};${clfg}m Happy Birthday \e[0m"
		done
		echo
	done
done

exit 0
