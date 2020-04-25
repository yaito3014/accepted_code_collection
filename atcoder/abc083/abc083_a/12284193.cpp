// URL: https://atcoder.jp/contests/abc083/submissions/12284193
// Date: Sat, 25 Apr 2020 01:10:57 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int L = A + B, R = C + D;
	cout << (L == R ? "Balanced" : L > R ? "Left" : "Right") << endl;
}
