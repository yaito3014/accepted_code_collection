// URL: https://atcoder.jp/contests/abc157/submissions/16219001
// Date: Tue, 25 Aug 2020 07:04:53 +0000
// Language: Python (3.8.2)
p,r=input,range
A=sum([list(map(int,p().split()))for _ in r(3)],[])
b=[int(p())for _ in r(int(p()))]
print('YNeos'[all([sum(1<<i for i in r(9)if A[i]in b)&v!=v for v in[7,56,73,84,146,273,292,448]])::2])
