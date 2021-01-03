// URL: https://atcoder.jp/contests/tricky/submissions/19182897
// Date: Sun, 03 Jan 2021 09:15:21 +0000
// Language: Python (3.8.2)
import sys
from decimal import Decimal, getcontext
#getcontext().prec = 100  標準は28,精度を調節
input = sys.stdin.readline
t = int(input())
for i in range(t):
	a, b, c = map(int, input().split())
	if a == 0:
		if b == 0:
			if c == 0:
				print(3)
			else:
				print(0)
		else:
			print(1, -c / b)
	else:
		d = b ** 2 - 4 * a * c
		d = Decimal(d)
		b = Decimal(b)
		a = Decimal(a)
		if d > 0:
			x = (-b - d.sqrt()) / (2 * a)
			y = (-b + d.sqrt()) / (2 * a)
			if x > y:
				x, y = y, x
			print(2, x, y)
		elif d == 0:
			print(1, -b / (2 * a))
		else:
			print(0)
