// URL: https://atcoder.jp/contests/abc019/submissions/5696638
// Date: Wed, 29 May 2019 22:13:19 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	std::string S;
	std::cin>>S;
	char prev = '\0';
	int count = -1;
	for(auto&v:S){
		if(prev==v){
			++count;
		}else{
			if(count>0)std::cout<<count;
			std::cout<<v;
			count=1;
		}
		prev=v;
	}
	std::cout<<count<<std::endl;
}
