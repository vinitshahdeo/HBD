package main

import (
	"encoding/hex"
	"fmt"
)

func main() {
	str := "486170707920426972746864617921"
	bs,_:= hex.DecodeString(str)
	fmt.Println(string(bs))
}