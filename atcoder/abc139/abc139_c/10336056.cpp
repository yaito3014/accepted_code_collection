// URL: https://atcoder.jp/contests/abc139/submissions/10336056
// Date: Tue, 25 Feb 2020 00:58:36 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> H(N);
	for(auto&e:H)cin >> e;
	int ans = 0;
	int c = 0;
	for(int i = 0; i < N - 1; ++i)
		if(H[i] >= H[i + 1])ans = max(ans, ++c);
	  else c = 0;
	cout << ans << endl;
}
