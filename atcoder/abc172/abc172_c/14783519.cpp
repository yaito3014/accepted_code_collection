// URL: https://atcoder.jp/contests/abc172/submissions/14783519
// Date: Sat, 27 Jun 2020 15:01:14 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, M, K;
  cin >> N >> M >> K;
  vector<long long> A(N + 1, 0), B(M + 1, 0);
  copy_n(istream_iterator<long long>(cin), N, next(begin(A)));
  copy_n(istream_iterator<long long>(cin), M, next(begin(B)));
  partial_sum(cbegin(A), cend(A), begin(A));
  partial_sum(cbegin(B), cend(B), begin(B));
  iterator_traits<decltype(B)::const_iterator>::difference_type ans = 0;
  auto last = upper_bound(cbegin(A), cend(A), K);
  for (auto iterA = cbegin(A); iterA != last; ++iterA) {
    ans = max(ans, distance(cbegin(A), iterA) +
                       distance(cbegin(B),
                                upper_bound(cbegin(B), cend(B), K - *iterA)) -
                       1);
  }
  cout << ans << '\n';
}
