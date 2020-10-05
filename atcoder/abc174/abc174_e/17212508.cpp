// URL: https://atcoder.jp/contests/abc174/submissions/17212508
// Date: Mon, 05 Oct 2020 16:04:27 +0000
// Language: C++ (GCC 9.2.1)
// from chicken1925
#include<iostream>
main(){int n,k,h=1e9,l=0;std::cin>>n>>k;int s[n];for(int&x:s)std::cin>>x;long m;for(;l<h&&(m=(l+h)/2);){long t=0;for(int x:s)t+=(x+m-1)/m-1;t>k?l=m+1:h=m;}std::cout<<h;}
