// URL: https://atcoder.jp/contests/sumitrust2019/submissions/8749486
// Date: Sun, 01 Dec 2019 13:47:21 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;
constexpr int Mod = 1000000007;
int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> table(N+2, 0);
  table[0] = 3;
  int64_t ans = 1;
  for (int i = 0; i < N; ++i) {
    int A;
    cin >> A;
    ans = ans * table[A] % Mod;
    --table[A];
    ++table[A + 1];
  }
  cout << ans << endl;
}
