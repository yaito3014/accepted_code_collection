// URL: https://atcoder.jp/contests/abc004/submissions/5389549
// Date: Mon, 13 May 2019 11:32:09 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	std::array<std::array<char,4>,4> c;
	for(auto&row:c)for(auto&elem:row)std::cin>>elem;
	for(auto row=c.rbegin();row!=c.rend();++row){
		for(auto elem=row->rbegin();elem!=row->rend();++elem)
			std::cout << *elem << " ";
		std::cout << std::endl;
	}
}
