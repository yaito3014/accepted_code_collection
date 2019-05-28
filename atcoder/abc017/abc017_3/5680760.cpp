// URL: https://atcoder.jp/contests/abc017/submissions/5680760
// Date: Tue, 28 May 2019 22:45:41 +0000
// Language: C++14 (GCC 5.4.1)

#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
    int N,M;
    std::cin >> N >> M;
    std::vector<int64_t> juwel(M+1,0);
    int sum = 0;
    for(int i=0;i<N;++i){
    	int l,r,s;
    	std::cin >> l >> r >> s;
    	juwel[l-1]+=s;
    	juwel[r]-=s;
    	sum+=s;
    }
    std::vector<int64_t> cumsum(M+2,0);
    for(int i=0;i<M+1;++i)
    	cumsum[i+1]=cumsum[i]+juwel[i];
    int64_t min = *std::min_element(&cumsum[1],&cumsum[M+1]);
    std::cout<<sum-min<<std::endl;
}
