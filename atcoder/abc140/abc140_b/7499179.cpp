// URL: https://atcoder.jp/contests/abc140/submissions/7499179
// Date: Sat, 14 Sep 2019 09:30:56 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> A(N),B(N),C(N-1);
	int ans = 0;
	for(auto&v:A)cin >> v;
	for(auto&v:B)cin >> v;
	for(auto&v:C)cin >> v;
	int prev = -1;
	for(auto&v:A){
		--v;
		ans += B[v];
		if(prev>=0&&prev+1==v)
			ans += C[prev];
		prev=v;
	}
	cout << ans << endl;
}
