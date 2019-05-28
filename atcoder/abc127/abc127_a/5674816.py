// URL: https://atcoder.jp/contests/abc127/submissions/5674816
// Date: Tue, 28 May 2019 09:49:03 +0000
// Language: Python3 (3.4.3)
a,b=map(int,input().split())
if a >= 13:
    print(b)
if a >= 6 and a <= 12:
    print(int(b/2))
if a <= 5:
    print(0)
