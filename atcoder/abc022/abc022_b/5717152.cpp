// URL: https://atcoder.jp/contests/abc022/submissions/5717152
// Date: Fri, 31 May 2019 22:08:43 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
	
	int N;
	std::cin >> N;
	std::set<int> s;
	int ans = 0;
	for(int i=0;i<N;++i){
		int A;
		std::cin >> A;
		if(s.find(A)!=s.end())++ans;
		s.insert(A);
	}
	std::cout << ans << std::endl;
	
}
