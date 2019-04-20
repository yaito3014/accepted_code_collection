// URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/5064034
// Date: Sat, 20 Apr 2019 14:04:50 +0000
// Language: Python3 (3.4.3)
N = int(input())
a = list(input())
result = N
count = 0
result = N
white = [0]*(N+1)
for i in range(N):
	white[i+1] = white[i]
	if a[i] == ".":
		white[i+1] += 1
for i in range(N+1):
    count = i-white[i] + white[N] - white[i]
    if count < result:
        result = count
print(result)
