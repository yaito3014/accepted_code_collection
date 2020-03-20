// URL: https://atcoder.jp/contests/abc042/submissions/11032908
// Date: Fri, 20 Mar 2020 22:40:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, L;
  cin >> N >> L;
  vector<string> S(N);
  for (auto& e : S)cin >> e;
  sort(begin(S), end(S));
  for (const auto& e : S)cout << e;
  cout << endl;
}
