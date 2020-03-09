// URL: https://www.hackerrank.com/contests/snct-spring20/challenges/a-e-i-o-u/submissions/code/1320975979
// Tester
// Language: Python 3
N = int(input())
S = input()
ans = 0
for i in S:
  if i=='a' or i=='i' or i=='u' or i=='e' or i=='o':
    ans+=1
print(ans)
