// URL: https://atcoder.jp/contests/abc167/submissions/13285564
// Date: Sun, 17 May 2020 09:52:51 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

#include <boost/range/adaptors.hpp>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<string> S(N);
  for (auto& e : S) cin >> e;
  vector<pair<int, int>> ps(N);
  transform(cbegin(S), cend(S), begin(ps), [](const string& s) {
    int A = 0, B = 0;
    for (char c : s) c == '(' ? ++B : B > 0 ? --B : ++A;
    return make_pair(A, B);
  });
  auto iter = partition(begin(ps), end(ps),
                        [](const auto& p) { return p.second >= p.first; });
  sort(begin(ps), iter,
       [](const auto& a, const auto& b) { return a.first < b.first; });
  sort(iter, end(ps),
       [](const auto& a, const auto& b) { return a.second > b.second; });
  vector<int> vec(N * 2);
  transform(cbegin(ps), cend(ps), begin(vec | boost::adaptors::strided(2)),
            [](const auto& p) { return -p.first; });
  transform(
      cbegin(ps), cend(ps),
      begin(vec | boost::adaptors::sliced(1, N) | boost::adaptors::strided(2)),
      [](const auto& p) { return p.second; });
  partial_sum(cbegin(vec), cend(vec), begin(vec));
  bool ans = all_of(cbegin(vec), cend(vec), [](int n) { return n >= 0; }) &&
             vec.back() == 0;
  cout << (ans ? "Yes" : "No") << endl;
}
