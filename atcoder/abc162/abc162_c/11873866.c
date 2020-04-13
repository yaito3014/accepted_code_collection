// URL: https://atcoder.jp/contests/abc162/submissions/11873866
// Date: Mon, 13 Apr 2020 01:44:08 +0000
// Language: C (GCC 9.2.1)
a,b,c,r,K;gcd(n,m){return m?gcd(m,n%m):n;}main(){scanf("%d",&K);for(;a++<K;)for(b=0;b++<K;)for(c=0;c++<K;)r+=gcd(a,gcd(b,c));printf("%d",r);}
