// URL: https://atcoder.jp/contests/abc109/submissions/14641304
// Date: Tue, 23 Jun 2020 14:36:22 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  bool ok = true;
  set<string> s;
  char c;
  for (int i = 0; i < N; ++i) {
  	string W;
  	cin >> W;
  	if (i > 0 && (c != W.front() || s.find(W) != s.end())) {
  		ok = false;
  		break;
  	}
  	s.insert(W);
  	c = W.back();
  }
  cout << (ok ? "Yes" : "No") << '\n';
}
