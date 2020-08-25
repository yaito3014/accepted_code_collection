// URL: https://atcoder.jp/contests/abc157/submissions/16218732
// Date: Tue, 25 Aug 2020 06:49:36 +0000
// Language: Python (3.8.2)
A = sum([list(map(int,input().split()))for _ in range(3)],[])
N = int(input())
b = [int(input()) for _ in range(N)]

f=0
for i in range(9):
	if A[i]in b:f|=1<<i
ans=[v for v in [7,56,73,84,146,273,292,448]if f&v==v]
print('Yes' if ans else 'No')
