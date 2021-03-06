// URL: https://atcoder.jp/contests/joi2021yo2/submissions/18847902
// Date: Fri, 18 Dec 2020 16:46:36 +0000
// Language: Python (3.8.2)
import bz2, base64
d="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"
d+='='*(-len(d)%4)
d=bz2.decompress(base64.b64decode(d))

n, q = map(int, input().split())
b = 0
for i in range(2, n):
	b += 3 ** i
for i in range(q):
	s = input()
	x = 0
	for c in s:
		x = x * 3 + ord(c) - ord('A')
	j = b + x
	print(int.from_bytes(d[j*4:j*4+4],byteorder='little'))