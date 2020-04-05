// URL: https://atcoder.jp/contests/judge-update-202004/submissions/11589517
// Date: Sun, 05 Apr 2020 12:51:59 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, Q;
  cin >> N >> Q;
  vector<int> A(N + 1, 0), S(Q);
  for (auto iter = next(begin(A)), last = end(A); iter != last; ++iter)cin >> *iter;
  for (auto& e : S)cin >> e;
  partial_sum(begin(A), end(A), begin(A), static_cast<int(*)(int, int)>(std::gcd));
  for (int i = 0; i < Q; ++i) {
    auto iter = partition_point(begin(A), end(A), [&](int a) { return gcd(a, S[i]) > 1; });
    int ans = (iter != end(A) ? distance(begin(A), iter) : gcd(A.back(), S[i]));
    cout << ans << "
";
  }
}
