// URL: https://atcoder.jp/contests/abc078/submissions/11895951
// Date: Mon, 13 Apr 2020 13:08:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); ios::sync_with_stdio(false);
	char X, Y;
	cin >> X >> Y;
	cout << (X == Y ? '=' : X < Y ? '<' : '>') << endl;
}
