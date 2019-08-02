// URL: https://atcoder.jp/contests/otemae2019/submissions/6649261
// Date: Fri, 02 Aug 2019 11:27:46 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;
int main() {
  int M, N, K;
  cin >> M >> N >> K;
  vector<int> x(N);
  for (auto& v : x)cin >> v;
  vector<int> field(M, 0);
  for (auto& v : x) ++field[v - 1];
  vector<int> field2 = field;
  for (int i = 0; i < M; ++i) {
    for (int j = 1; j <= K; ++j) {
      if (i - j >= 0 && field[i - j] > 0)++field2[i];
      else if (i + j < M && field[i + j] > 0)++field2[i];
    }
  }
  int ans = *max_element(begin(field2), end(field2));
  cout << ans << endl;
}
