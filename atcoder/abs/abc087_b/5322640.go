// URL: https://atcoder.jp/contests/abs/submissions/5322640
// Date: Thu, 09 May 2019 13:48:25 +0000
// Language: Go (1.6)
package main

import "fmt"

func main() {
	var A, B, C, X, ans int
	fmt.Scan(&A, &B, &C, &X)
	for a := 0; a <= A; a++ {
		for b := 0; b <= B; b++ {
			c := (X - 500*a - 100*b) / 50
			if 0 <= c && c <= C {
				ans++
			}
		}
	}
	fmt.Println(ans)
}
