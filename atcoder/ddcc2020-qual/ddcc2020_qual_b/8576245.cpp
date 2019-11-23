// URL: https://atcoder.jp/contests/ddcc2020-qual/submissions/8576245
// Date: Sat, 23 Nov 2019 12:19:04 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int64_t> A(N);
  for (auto& v : A)cin >> v;
  vector<int64_t> ls(N + 1, 0), rs(N + 1, 0);
  for (int i = 0; i < N; ++i)ls[i + 1] = ls[i] + A[i];
  for (int i = N - 1; i >= 0; --i)rs[i] = rs[i + 1] + A[i];
  int64_t ans = INT64_MAX;
  for (int i = 0; i < N; ++i)
    ans = min(ans, abs(ls[i] - rs[i]));
  cout << ans << endl;
}
