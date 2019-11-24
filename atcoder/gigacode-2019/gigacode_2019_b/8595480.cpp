// URL: https://atcoder.jp/contests/gigacode-2019/submissions/8595480
// Date: Sun, 24 Nov 2019 04:34:11 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    int A, B;
    cin >> A >> B;
    if (A >= X && B >= Y && A + B >= Z)++ans;
  }
  cout << ans << endl;
}
