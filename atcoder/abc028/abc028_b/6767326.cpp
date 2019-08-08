// URL: https://atcoder.jp/contests/abc028/submissions/6767326
// Date: Thu, 08 Aug 2019 06:17:47 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	array<int,6> ans = {};
	for(auto&v:S)++ans[v-'A'];
	char sp=0;
	for(auto&v:ans){
		if(sp!=0)cout << sp;
		cout << v;
		sp = ' ';
	}
	cout << endl;
}
