package main

import (
	"fmt"
	"os"
)

func main() {
	for _, i := range os.Args[1:] {
		fmt.Printf("Happy Birthday, %s!\n", i)
	}
}
