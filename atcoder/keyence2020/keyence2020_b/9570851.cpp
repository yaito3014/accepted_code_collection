// URL: https://atcoder.jp/contests/keyence2020/submissions/9570851
// Date: Sat, 18 Jan 2020 12:36:08 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int N;
	cin >> N;
	vector<pair<int, int>> XL(N);
	for(auto& v : XL){
		int X, L;
		cin >> X >> L;
		v = make_pair(X+L, X-L);
	}
	sort(begin(XL), end(XL));
	int prev = INT_MIN;
	int ans = 0;
	for(auto& v : XL){
		if(v.second < prev)continue;
		++ans;
		prev = v.first;
	}
	cout << ans << endl;
}
