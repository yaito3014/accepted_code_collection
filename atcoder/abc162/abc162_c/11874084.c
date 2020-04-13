// URL: https://atcoder.jp/contests/abc162/submissions/11874084
// Date: Mon, 13 Apr 2020 01:52:33 +0000
// Language: C (GCC 9.2.1)
a,b,c,r,K;g(n,m){return m?g(m,n%m):n;}main(){scanf("%d",&K);for(;a++<K;)for(b=0;b++<K;)for(c=0;c++<K;)r+=g(a,g(b,c));printf("%d",r);}
