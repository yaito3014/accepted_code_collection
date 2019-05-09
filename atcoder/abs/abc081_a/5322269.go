// URL: https://atcoder.jp/contests/abs/submissions/5322269
// Date: Thu, 09 May 2019 13:18:02 +0000
// Language: Go (1.6)
package main

import "fmt"

func main() {
	var s string
	fmt.Scan(&s)
	ans := 0
	for i := range s {
		if s[i] == '1' {
			ans++
		}
	}
	fmt.Println(ans)
}
