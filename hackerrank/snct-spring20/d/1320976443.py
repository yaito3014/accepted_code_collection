// URL: https://www.hackerrank.com/contests/snct-spring20/challenges/koppa-koppa/submissions/code/1320976443
// Tester
// Language: Python 3
import math
Q,X = list(map(int, input().strip().split()))
ans = 0
for i in range(1,int(math.sqrt(X))+1):
  if X % i == 0 and X // i <= Q:
    if X // i == i:
      ans+=1
    else:
      ans+=2
print(ans)
