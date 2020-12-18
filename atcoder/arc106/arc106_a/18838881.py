// URL: https://atcoder.jp/contests/arc106/submissions/18838881
// Date: Fri, 18 Dec 2020 05:08:05 +0000
// Language: Python (3.8.2)
n = int(input())
for a in range(1, 40):
	for b in range(1, 40):
		if 3 ** a + 5 ** b == n:
			print(a, b)
			quit()
print(-1)
