// URL: https://atcoder.jp/contests/abc091/submissions/12991745
// Date: Sat, 09 May 2020 14:03:40 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
	using namespace std;
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int A, B, C;
	cin >> A >> B >> C;
	bool ans = C <= A + B;
	cout << (ans ? "Yes" : "No") << endl;
}
