// URL: https://atcoder.jp/contests/abc157/submissions/16217944
// Date: Tue, 25 Aug 2020 06:10:26 +0000
// Language: Python (3.8.2)
A = [list(map(int, input().split())) for _ in range(3)]
N = int(input())
b = [int(input()) for _ in range(N)]

field = 0
for v in b:
	for i in range(9):
		if A[i // 3][i % 3] == v:
			field = field | (1 << i)
ans = False
for v in sum([[273,84],sum([[73<<i,7<<i*3]for i in range(3)],[])],[]):
  ans = ans or field&v==v;
print('Yes' if ans else 'No')
