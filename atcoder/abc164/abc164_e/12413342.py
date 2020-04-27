// URL: https://atcoder.jp/contests/abc164/submissions/12413342
// Date: Mon, 27 Apr 2020 02:42:10 +0000
// Language: Python (3.8.2)
from heapq import *
N, M, S = tuple(map(int, input().split()))
graph = [[] for _ in range(N)]
Max = 0
for i in range(M):
	U, V, A, B = tuple(map(int, input().split()))
	Max = max(Max, A)
	U -= 1
	V -= 1
	graph[U] += [(V, A, B)]
	graph[V] += [(U, A, B)]
Max *= (N - 1)
for i in range(N):
	C, D = tuple(map(int, input().split()))
	graph[i] += [(i, -C, D)]
costs = [[2**64 for _ in range(Max + 1)] for _ in range(N)]
que = [(0, 0, S)]
while que:
	(cost_sum, node, coins) = heappop(que)
	for to, pay, cost in graph[node]:
		if coins >= pay and cost_sum + cost < costs[to][min(Max, coins - pay)]:
			costs[to][min(Max, coins - pay)] = cost_sum + cost
			heappush(que, (cost_sum + cost, to, min(Max, coins - pay)))
for i in range(1, N):
	print(min(costs[i]))
