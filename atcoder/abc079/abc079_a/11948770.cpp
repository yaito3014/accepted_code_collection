// URL: https://atcoder.jp/contests/abc079/submissions/11948770
// Date: Wed, 15 Apr 2020 09:05:14 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	string N;
	cin >> N;
	bool ans = regex_match(N, regex("\\d?(\\d)\\1{2}\\d?"));
	cout << (ans ? "Yes" : "No") << endl;
}
