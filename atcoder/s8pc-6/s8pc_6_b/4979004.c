// URL: https://atcoder.jp/contests/s8pc-6/submissions/4979004
// Date: Sun, 14 Apr 2019 14:12:41 +0000
// Language: C (GCC 5.4.1)
#define rep(i,N) for(i=0;i<N;++i)
i,j,k,A[30],B[30];typedef long long ll;main(N){scanf("%d",&N);ll a=0x7fffffffffffffff,d=0;rep(i,N)scanf("%d %d",A+i,B+i),d+=B[i]-A[i];rep(i,N)rep(j,N){ll s=0;rep(k,N)s+=abs(A[i]-A[k])+abs(B[j]-B[k]);a=a<s+d?a:s+d;}printf("%ld",a);}
