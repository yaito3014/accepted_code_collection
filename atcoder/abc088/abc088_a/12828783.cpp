// URL: https://atcoder.jp/contests/abc088/submissions/12828783
// Date: Mon, 04 May 2020 14:15:42 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
	using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, A;
  cin >> N >> A;
  bool ans = N % 500 <= A;
  cout << (ans ? "Yes" : "No") << endl;
}
