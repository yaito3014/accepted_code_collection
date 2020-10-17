// URL: https://atcoder.jp/contests/abc180/submissions/17456183
// Date: Sat, 17 Oct 2020 11:25:14 +0000
// Language: Python (3.8.2)
n = int(input())
x = list(map(int, input().split()))
print(sum(abs(v) for v in x))
print(sum(v**2 for v in x)**0.5)
print(max(abs(v) for v in x))
