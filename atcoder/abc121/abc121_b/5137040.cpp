// URL: https://atcoder.jp/contests/abc121/submissions/5137040
// Date: Sat, 27 Apr 2019 09:47:48 +0000
// Language: C++14 (GCC 5.4.1)

#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, M, C;
    std::cin >> N >> M >> C;
    std::vector<int> B(M);
    for(auto&i:B)std::cin >> i;
    int ans = 0;
    for(int i = 0;i<N;++i){
    	int sum = 0;
    	for(int j = 0;j<M;++j){
    		int A;
    		std::cin >> A;
    		sum += A*B[j];
    	}
    	if(sum+C>0)++ans;
    }
    std::cout << ans << std::endl;
}
