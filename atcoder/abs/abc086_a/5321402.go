// URL: https://atcoder.jp/contests/abs/submissions/5321402
// Date: Thu, 09 May 2019 11:41:43 +0000
// Language: Go (1.6)
package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	if a*b%2==0 {
		fmt.Println("Even")
	}else{
		fmt.Println("Odd")	
	}
}
