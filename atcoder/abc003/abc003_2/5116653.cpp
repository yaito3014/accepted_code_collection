// URL: https://atcoder.jp/contests/abc003/submissions/5116653
// Date: Thu, 25 Apr 2019 07:25:11 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    std::string S,T;
    std::cin >> S >> T;
    
    auto is_vailed = [](char c){
    	switch(c)case'a':case't':case'c':case'o':case'd':case'e':case'r':case'@':return true;
    	return false;
    };
    
    bool ans = true;
    
    for(int i = 0;i<S.size();++i){
	    if(
	    	S[i]!=T[i] &&
			!(S[i]=='@'&&is_vailed(T[i])) &&
		    !(T[i]=='@'&&is_vailed(S[i]))
	    ){
	    	ans = false;
	    	break;
	    }
    }
    std::cout << (ans?"You can win":"You will lose") << std::endl;
}
