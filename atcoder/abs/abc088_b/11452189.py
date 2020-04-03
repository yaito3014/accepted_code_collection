// URL: https://atcoder.jp/contests/abs/submissions/11452189
// Date: Fri, 03 Apr 2020 02:02:22 +0000
// Language: Python (3.4.3)
[
  [
    print(sum(a[::2])-sum(a[1::2]))
    for a in [sorted(list(map(int,input().split())),reverse=True)]
  ]
  for _ in [input()]
]
