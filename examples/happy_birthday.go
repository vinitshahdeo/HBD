/*
@author ang-iv
*/

package main

import (
	"fmt"
	"encoding/base64"
)

func main() {
	data := "SGFwcHkgQmlydGhkYXkh"
	msg, _ := base64.StdEncoding.DecodeString(data)
	fmt.Println(string(msg))
}
