// URL: https://atcoder.jp/contests/abs/submissions/5322828
// Date: Thu, 09 May 2019 14:05:34 +0000
// Language: Go (1.6)
package main

import (
	"fmt"
	"sort"
)

func main() {
	var N int
	fmt.Scan(&N)
	A := make([]int, N)
	for i := range A {
		fmt.Scan(&A[i])
	}
	sort.Ints(A)
	var Alice, Bob int
	for i := 0; i < N; i++ {
		if i % 2 == 0 {
			Alice += A[N-i-1]
		} else {
			Bob += A[N-i-1]
		}
	}
	fmt.Println(Alice - Bob)
}
