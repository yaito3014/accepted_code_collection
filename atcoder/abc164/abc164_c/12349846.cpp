// URL: https://atcoder.jp/contests/abc164/submissions/12349846
// Date: Sun, 26 Apr 2020 12:06:51 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  set<string> ans;
  for (int i = 0; i < N; ++i) {
    string S;
    cin >> S;
    ans.insert(move(S));
  }
  cout << ans.size() << endl;
}
