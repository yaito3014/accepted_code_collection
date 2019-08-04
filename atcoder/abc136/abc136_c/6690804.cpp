// URL: https://atcoder.jp/contests/abc136/submissions/6690804
// Date: Sun, 04 Aug 2019 12:13:22 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
int main() {
  std::cout.tie(0); std::ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> H(N);
  for (auto& v : H)cin >> v;
  bool ans = true;
  for (int i = N - 2; i >= 0; --i) {
    if (H[i] <= H[i + 1])continue;
    if (H[i] - 1 == H[i + 1]) {
      --H[i];
      continue;
    }
    ans = false;
    break;
  }
  cout << (ans ? "Yes" : "No") << endl;
}
