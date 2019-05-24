// URL: https://atcoder.jp/contests/abc073/submissions/5564792
// Date: Fri, 24 May 2019 09:41:48 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE


int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
   
   int N;
   std::cin >> N;
   std::set<int> s;
   for(int i=0;i<N;++i){
   		int A;
   		std::cin >> A;
   		auto itr = s.find(A);
   		if(itr == s.end())s.insert(A);
   		else s.erase(A);
   }
   std::cout << s.size() << std::endl;
}
