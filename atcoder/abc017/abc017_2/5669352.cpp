// URL: https://atcoder.jp/contests/abc017/submissions/5669352
// Date: Mon, 27 May 2019 22:45:41 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE


int main() {
	std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
	
	std::string S;
	std::cin >> S;
	bool ans = true;
	int N = S.size();
	for(int i=0;i<N&&ans;){
		switch(S[i]){
		default:
			ans = false;
			break;
		case 'c':
			if(i+1<N&&S[i+1]=='h')i+=2;
			else ans=false;
			break;
		case'o':case'k':case'u':
			++i;
			break;	
		}
	}
	std::cout<<(ans?"YES":"NO")<<"
";
}
