// URL: https://atcoder.jp/contests/abc090/submissions/12960926
// Date: Fri, 08 May 2020 14:54:11 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
	using namespace std;
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	array<string, 3> c;
	for(auto& e : c)cin >> e;
	string ans;
	for(int i = 0; i < 3; ++i)ans += c[i][i];
	cout << ans << endl;
}
