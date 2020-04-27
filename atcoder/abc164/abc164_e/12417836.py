// URL: https://atcoder.jp/contests/abc164/submissions/12417836
// Date: Mon, 27 Apr 2020 06:07:05 +0000
// Language: Python (3.8.2)
[print(min(m[i])[0])for h in [__import__('heapq')]for a,d,r,n,x in[(h.heappush,h.heappop,range,lambda:map(int,input().split()),list.append)]for N,M,S in[n()]for g,q in[([[]for _ in r(N)],[(0,S,0)])]for L in[max(A for _ in r(M)for U,V,A,B in[n()]if not(x(g[U-1],(V-1,A,B))or x(g[V-1],(U-1,A,B))))*(N-1)]for m in[[[[2**64]for _ in r(L+1)]for _ in r(N)]]for _ in[[[x(g[i],(i,-C,D))for i in r(N)for C,D in[n()]],[[[_ for s,v,i in[d(q)]for _ in[[a(q,(s+c,j,t))for t,p,c in g[i]for j in[min(L,v-p)]for y in[m[t][j]]if v>=p and s+c<y[0] and not(y.clear()or x(y,s+c))]]if not(x(l,None)if q else l.clear())]]for l in[[None]]for _ in l]]]for i in r(1,N)]
