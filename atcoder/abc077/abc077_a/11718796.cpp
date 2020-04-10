// URL: https://atcoder.jp/contests/abc077/submissions/11718796
// Date: Fri, 10 Apr 2020 09:29:48 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	string a, b;
	cin >> a >> b;
	bool ans = equal(begin(a), end(a), rbegin(b), rend(b));
	cout << (ans ? "YES" : "NO") << endl;
}
