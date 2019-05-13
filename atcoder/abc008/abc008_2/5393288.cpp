// URL: https://atcoder.jp/contests/abc008/submissions/5393288
// Date: Mon, 13 May 2019 22:52:58 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	int N;
	std::cin >> N;
	std::map<std::string,int> m;
	for(int i=0;i<N;++i){
		std::string s;
		std::cin >> s;
		++m[s];
	}
	auto itr = std::max_element(m.begin(),m.end(),[](const auto&a,const auto&b){return a.second<b.second;});
	std::cout << itr->first << std::endl;	
}
