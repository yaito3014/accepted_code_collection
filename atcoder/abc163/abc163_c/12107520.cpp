// URL: https://atcoder.jp/contests/abc163/submissions/12107520
// Date: Sun, 19 Apr 2020 12:12:33 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> ans(N);
  for (int i = 1; i < N; ++i) {
    int A;
    cin >> A, --A;
    ++ans[A];
  }
  for (auto& e : ans)cout << e << '\n';
}
