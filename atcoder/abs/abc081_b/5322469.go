// URL: https://atcoder.jp/contests/abs/submissions/5322469
// Date: Thu, 09 May 2019 13:34:24 +0000
// Language: Go (1.6)
package main

import "fmt"

func main() {
	var N int
	fmt.Scan(&N)
	ans := 32
	for i := 0; i < N; i++ {
		var A, c int
		fmt.Scan(&A)
		for A&1 == 0 {
			A >>= 1
			c++
		}
		if ans > c {
			ans = c
		}
	}
	fmt.Println(ans)
}
