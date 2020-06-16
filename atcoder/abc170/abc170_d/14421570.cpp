// URL: https://atcoder.jp/contests/abc170/submissions/14421570
// Date: Tue, 16 Jun 2020 23:55:17 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N), f(N, 0);
  sort(begin(A), copy_n(istream_iterator<int>(cin), N, begin(A)));
  for_each(cbegin(A), cend(A),
           [&, m = *max_element(cbegin(A), cend(A))](int n) {
             ++f[distance(cbegin(A), lower_bound(cbegin(A), cend(A), n))];
             for (int i = 2; i * n <= m; ++i)
               if (auto iter = lower_bound(cbegin(A), cend(A), i * n);
                   iter != cend(A) && *iter == i * n)
                 ++++f[distance(cbegin(A), iter)];
           });
  cout << count(cbegin(f), cend(f), 1) << '\n';
}
