// URL: https://www.hackerrank.com/contests/snct-spring20/challenges/err-r/submissions/code/1320975936
// Tester
// Language: Python 3
A,B = list(map(int, input().strip().split()))
if A<=B:
  print("Error")
else:
  print(A-B)
