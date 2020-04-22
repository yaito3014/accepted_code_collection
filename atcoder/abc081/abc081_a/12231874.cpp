// URL: https://atcoder.jp/contests/abc081/submissions/12231874
// Date: Wed, 22 Apr 2020 17:19:39 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	string S;
	cin >> S;
	int ans = count(begin(S), end(S), '1');
	cout << ans << endl;
}
