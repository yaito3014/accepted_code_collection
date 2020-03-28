// URL: https://atcoder.jp/contests/abc160/submissions/11319085
// Date: Sat, 28 Mar 2020 14:35:45 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int32_t X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  vector<int64_t> p(A), q(B), r(C), a(X + Y + C);
  auto f = [](auto n, auto& c) { copy_n(istream_iterator<int64_t>(cin), n, begin(c)); sort(rbegin(c), rend(c)); };
  f(A, p); f(B, q); f(C, r);
  copy_n(begin(p), X, copy_n(begin(q), Y, copy_n(begin(r), C, begin(a)))); sort(rbegin(a), rend(a));
  cout << accumulate(begin(a), next(begin(a), X + Y), 0ll) << endl;
}
