// URL: https://atcoder.jp/contests/abc012/submissions/5407236
// Date: Wed, 15 May 2019 09:01:06 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    
    using pair = std::pair<int,int>;
    
    int N,M;
    std::cin >> N >> M;
    
    std::vector<std::vector<pair>>
    	nodes(N);
    std::vector<int> memo(N);
    
    for(int i=0;i<M;++i){
    	int a,b,t;
    	std::cin >> a >> b >> t;
    	nodes[a-1].push_back(std::make_pair(b-1,t));
    	nodes[b-1].push_back(std::make_pair(a-1,t));
    }
    int ans = INT_MAX;
    for(int i=0;i<N;++i){
    	std::queue<int> q;
    	q.push(i);
    	std::fill(memo.begin(),memo.end(),INT_MAX);
    	memo[i]=0;
    	while(!q.empty()){
    		int now = q.front();
    		q.pop();
    		for(auto&v:nodes[now]){
    			int next,time;
    			std::tie(next,time) = v;
    			if(memo[next]>memo[now]+time){
    			    memo[next]=memo[now]+time;
    			    q.push(next);
    			}
    		}
    	}
    	ans=std::min(ans,*std::max_element(memo.begin(),memo.end()));
    }
    std::cout << ans << std::endl;
}
