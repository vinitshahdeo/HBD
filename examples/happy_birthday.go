package main

import (
	"github.com/common-nighthawk/go-figure"
)

// Run go build happy_birthday.go && ./happy_birthday
func main() {
	birthdayGreeting := figure.NewFigure("Happy Birthday!!!!!", "", true)
	birthdayGreeting.Print()
}
