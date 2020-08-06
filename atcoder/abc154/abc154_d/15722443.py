// URL: https://atcoder.jp/contests/abc154/submissions/15722443
// Date: Thu, 06 Aug 2020 10:14:01 +0000
// Language: Python (3.8.2)
n, k = map(int, input().split())
p = list(map(int, input().split()))

arr = [(1 + m) / 2 for m in p]
ans = 0
sum = 0
for i in range(n):
	sum += arr[i]
	if i >= k: sum -= arr[i - k] 
	ans = max(ans, sum)
print(ans)
