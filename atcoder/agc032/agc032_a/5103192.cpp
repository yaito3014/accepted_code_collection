// URL: https://atcoder.jp/contests/agc032/submissions/5103192
// Date: Tue, 23 Apr 2019 22:16:21 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;
    std::deque<int> b(N);
    std::deque<int> ans;
    for(auto&i:b)std::cin>>i;
    
    for(int i = 0;i<N;++i){
    	for(int j = b.size()-1;j>=0;--j){
    		if(b[j]==j+1){
    			ans.push_front(b[j]);
    			b.erase(b.begin()+j);
    			break;
    		}
    	}
    }
   	if(b.empty()){
   		for(auto&i:ans){
   			std::cout << i << std::endl;
   		}
   	}
   	else std::cout << -1 << std::endl;
}
