// URL: https://atcoder.jp/contests/abc163/submissions/15890593
// Date: Fri, 14 Aug 2020 15:16:13 +0000
// Language: Python (3.8.2)
n = int(input())
a = [0] * n
for v in map(int, input().split()):
	a[v - 1] += 1
for v in a:
	print(v)
