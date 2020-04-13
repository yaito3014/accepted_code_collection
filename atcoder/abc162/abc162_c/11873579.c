// URL: https://atcoder.jp/contests/abc162/submissions/11873579
// Date: Mon, 13 Apr 2020 01:29:50 +0000
// Language: C (GCC 9.2.1)
a,b,c,r,K;gcd(n,m){return m?gcd(m,n%m):n;}main(){scanf("%d",&K);for(a=1;a<=K;++a){for(b=1;b<=K;++b){for(c=1;c<=K;++c)r+=gcd(a,gcd(b,c));}}printf("%d
",r);}
