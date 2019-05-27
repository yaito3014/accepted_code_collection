// URL: https://atcoder.jp/contests/abc128/submissions/5662374
// Date: Mon, 27 May 2019 08:48:32 +0000
// Language: Python3 (3.4.3)
N=int(input())
arr=[(0,0,0)]*N
for i in range(N):
	S,P = input().split()
	arr[i] = (S,-int(P),i+1)
arr.sort()
for _,_,i in arr:
	print(i)
