// URL: https://atcoder.jp/contests/s8pc-6/submissions/4977831
// Date: Sun, 14 Apr 2019 13:30:34 +0000
// Language: C (GCC 5.4.1)
A,i,s;main(N,T){scanf("%d %d",&N,&T);for(;i<N-1;++i)scanf("%d",&A),s+=A;printf("%d",s/T+(s%T?1:0));}
