// URL: https://atcoder.jp/contests/abs/submissions/5322966
// Date: Thu, 09 May 2019 14:17:39 +0000
// Language: Go (1.6)
package main

import (
	"fmt"
	"sort"
)

func main() {
	var N int
	fmt.Scan(&N)
	d := make([]int, N)
	for i := range d {
		fmt.Scan(&d[i])
	}
	sort.Ints(d)
	var prev, ans int
	for _, v := range d {
		if prev != v {
			ans++
		}
		prev = v
	}
	fmt.Println(ans)
}
