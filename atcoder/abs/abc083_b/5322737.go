// URL: https://atcoder.jp/contests/abs/submissions/5322737
// Date: Thu, 09 May 2019 13:56:47 +0000
// Language: Go (1.6)
package main

import "fmt"

func main() {
	var N, A, B, ans int
	fmt.Scan(&N, &A, &B)
	sum := func(v int) int {
		r := 0
		for v > 0 {
			r += v % 10
			v /= 10
		}
		return r
	}
	for i := 1; i <= N; i++ {
		s := sum(i)
		if A <= s && s <= B {
			ans += i
		}
	}
	fmt.Println(ans)
}
