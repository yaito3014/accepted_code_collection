// URL: https://atcoder.jp/contests/code-formula-2014-quala/submissions/13760533
// Date: Sun, 31 May 2020 05:26:01 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  vector<tuple<int, int, int>> A;
  A.reserve(N * K);
  for (int i = 0; i < N; ++i)
    for (int j = 0; j < K; ++j) {
      int a;
      cin >> a;
      A.emplace_back(j, i, a);
    }
  sort(begin(A), end(A));
  set<int> sure;
  for (int i = 0; i < N; ++i) {
    set<int> s;
    for (int j = 0, c = 0; j < N * K && s.size() + c < K; ++j) {
      if (get<1>(A[j]) > i) ++c;
      else s.insert(get<2>(A[j]));
    }
    set_difference(cbegin(s), cend(s), cbegin(sure), cend(sure), ostream_iterator<int>(cout, " "));
    cout << '\n';
    for (const auto& e : s) sure.insert(e);
  }
}
