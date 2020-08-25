// URL: https://atcoder.jp/contests/abc157/submissions/16218806
// Date: Tue, 25 Aug 2020 06:54:46 +0000
// Language: Python (3.8.2)
p,r=input,range
A=sum([list(map(int,p().split()))for _ in r(3)],[])
N=int(p())
b=[int(p())for _ in r(N)]
print('Yes'if[v for v in[7,56,73,84,146,273,292,448]if sum(1<<i for i in r(9)if A[i]in b)&v==v]else'No')
