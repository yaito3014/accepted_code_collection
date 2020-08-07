// URL: https://atcoder.jp/contests/abc006/submissions/15746543
// Date: Fri, 07 Aug 2020 16:30:23 +0000
// Language: Python (3.8.2)
n = int(input())
s = [0] * max(n, 3)
s[0] = s[1] = 0
s[2] = 1
for i in range(3, n):
	s[i] = sum(s[i-3:i]) % 10007
print(s[n - 1])
