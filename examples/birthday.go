package main
import "fmt"

func reverse(str string) (result string) { 
    for _, v := range str { 
        result = string(v) + result 
    } 
    return
} 

func main() {
	str := "YADHTRIB YPPAH"
  	strRev := reverse(str) 
    	fmt.Println(strRev) 
}
