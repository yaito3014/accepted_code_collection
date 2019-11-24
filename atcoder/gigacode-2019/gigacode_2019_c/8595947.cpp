// URL: https://atcoder.jp/contests/gigacode-2019/submissions/8595947
// Date: Sun, 24 Nov 2019 04:41:35 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int D;
  cin >> D;
  vector<int> a(D);
  for (auto& v : a)cin >> v;
  vector<int64_t> b(D);
  for (auto& v : b)cin >> v;
  int64_t ans = INT64_MAX;
  int64_t money = 0;
  for (int i = 0; i < D; ++i) {
    if (b[i] <= money)ans = min(ans, b[i]);
    money += a[i];
    if (b[i] <= money)ans = min(ans, b[i]);
  }
  if (ans == INT64_MAX)ans = -1;
  cout << ans << endl;
}
