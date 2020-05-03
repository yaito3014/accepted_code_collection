// URL: https://atcoder.jp/contests/abc166/submissions/12725112
// Date: Sun, 03 May 2020 12:11:29 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  for (auto& e : H)cin >> e;
  vector<bool> ans(N, true);
  for (int i = 0; i < M; ++i) {
    int A, B;
    cin >> A >> B, --A, --B;
    ans[A] = ans[A] && H[A] > H[B];
    ans[B] = ans[B] && H[B] > H[A];
  }
  cout << count(cbegin(ans), cend(ans), true);
}
