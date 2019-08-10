// URL: https://atcoder.jp/contests/abc029/submissions/6798823
// Date: Sat, 10 Aug 2019 10:12:30 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;

auto fix = [](auto f){
	return [=](auto&&...args){
		return f(f, args...);
	};
};

int main(){
	int N;
	cin >> N;
	auto dfs = fix([](auto f, int n, std::string s){
		if(n==0){
			cout << s << "
";
			return;
		}
		for(auto c:{'a','b','c'})
			f(f, n-1, s+c);
	});
	dfs(N, "");
}
