// URL: https://atcoder.jp/contests/abc162/submissions/11872827
// Date: Mon, 13 Apr 2020 00:52:33 +0000
// Language: Python (3.8.2)
import math
g=math.gcd
r=range(1,int(input())+1)
print(sum(g(g(i,j),k)for i in r for j in r for k in r))
