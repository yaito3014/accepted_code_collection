// URL: https://atcoder.jp/contests/abc071/submissions/5329501
// Date: Fri, 10 May 2019 09:35:05 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main(){
	
	int N;
	std::cin >> N;
	std::map<int64_t, int> map;
	for(int i=0;i<N;++i){
		int64_t A;
		std::cin >> A;
		map[A]++;
	}
	for(auto itr=map.begin();itr!=map.end();){
		if(itr->second<2)map.erase((itr++)->first);
		else ++itr;
	}
	
	int64_t ans = 0;
	
	if(!map.empty()){
		auto front = map.rbegin();
		if(front->second>=4)
			ans = front->first*front->first;
		else if(std::next(front)!=map.rend()){
			auto next = std::next(front);
			ans = front->first*next->first;
		}
	}
	
	std::cout << ans << std::endl;
	
}
