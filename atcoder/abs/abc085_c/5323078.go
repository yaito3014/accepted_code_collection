// URL: https://atcoder.jp/contests/abs/submissions/5323078
// Date: Thu, 09 May 2019 14:28:18 +0000
// Language: Go (1.6)
package main

import (
	"fmt"
)

func main() {
	var N, Y int
	fmt.Scan(&N, &Y)
	var i, j, k int
	flag := false
OUTER_FOR:
	for i = 0; i <= N; i++ {
		for j = 0; j <= N-i; j++ {
			k = N - i - j
			if 10000*i+5000*j+1000*k == Y {
				flag = true
				break OUTER_FOR
			}
		}
	}
	if flag {
		fmt.Println(i, j, k)
	} else {
		fmt.Println(-1, -1, -1)
	}
}
