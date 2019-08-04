// URL: https://atcoder.jp/contests/abc136/submissions/6700902
// Date: Sun, 04 Aug 2019 12:46:17 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
int main() {
  std::cout.tie(0); std::ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int N = S.length();
  S.push_back('R');
  vector<int> ans(N, 0);
  int l = 0, r = 1;
  int pos = 0;
  for (int i = 1; i <= N; ++i) {
    if (S[i] == 'R')++r;
    else if (S[i] == 'L')++l;
    if (S[i - 1] == 'R' && S[i] == 'L')pos = i - 1;
    else if (S[i - 1] == 'L' && S[i] == 'R') {
      --r;
      ans[pos] = ans[pos + 1] = (r + l) / 2;
      if ((r + l) % 2 == 1)++ans[pos + (r % 2 ? 0 : 1)];
      l = 0, r = 1;
    }
  }
  for (auto& v : ans)cout << v << " ";
}
