// URL: https://atcoder.jp/contests/agc014/submissions/10519316
// Date: Wed, 04 Mar 2020 03:22:08 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> count(N);
  for (int i = 0; i < M; ++i){
    int a, b;
    cin >> a >> b;
    --a; --b;
    ++count[a]; ++count[b];
  }
  bool ans = all_of(begin(count), end(count), [](int n) { return n % 2 == 0; });
  cout << (ans ? "YES" : "NO") << endl;
}
