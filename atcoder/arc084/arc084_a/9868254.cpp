// URL: https://atcoder.jp/contests/arc084/submissions/9868254
// Date: Sun, 02 Feb 2020 06:41:10 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N), B(N), C(N);
  for (auto& v : A)cin >> v;
  for (auto& v : B)cin >> v;
  for (auto& v : C)cin >> v;
  sort(begin(A), end(A));
  sort(begin(B), end(B));
  sort(begin(C), end(C));
  int64_t ans = 0;
  for (auto& b : B) {
    int64_t a = distance(begin(A), lower_bound(begin(A), end(A), b));
    int64_t c = distance(upper_bound(begin(C), end(C), b),end(C));
    ans += a * c;
  }
  cout << ans << endl;
}
