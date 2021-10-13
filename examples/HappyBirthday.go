package main

import (
	"fmt"
	"time"
)

func main() {
	greeting := "HAPPY BIRTHDAY \nHOPE YOUR CODE RUNS WITHOUT ANY ERRORS"

	for i := range greeting{
		time.Sleep(100*time.Millisecond)
		fmt.Print(string(greeting[i]))
	}
}