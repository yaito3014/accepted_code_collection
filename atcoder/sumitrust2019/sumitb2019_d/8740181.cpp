// URL: https://atcoder.jp/contests/sumitrust2019/submissions/8740181
// Date: Sun, 01 Dec 2019 12:50:34 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  string S;
  cin >> N >> S;
  vector<array<int, 10>> table(N + 1);
  for (auto& v : table)v.fill(N);
  for (int i = N - 1; i >= 0; --i) {
    table[i] = table[i + 1];
    table[i][S[i] - '0'] = i;
  }
  set<tuple<int, int, int>> s;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < 10; ++j) {
      for (int k = 0; k < 10; ++k) {
        if (table[i + 1][j] == N)continue;
        if (table[table[i + 1][j] + 1][k]!=N)
          s.insert(make_tuple(S[i] - '0', j, k));
      }
    }
  }
  int ans = s.size();
  cout << ans << endl;
}
