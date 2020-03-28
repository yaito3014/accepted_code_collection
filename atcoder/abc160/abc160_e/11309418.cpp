// URL: https://atcoder.jp/contests/abc160/submissions/11309418
// Date: Sat, 28 Mar 2020 13:25:35 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  deque<int64_t> p(A), q(B), r(C);
  for (auto& e : p)cin >> e;
  for (auto& e : q)cin >> e;
  for (auto& e : r)cin >> e;
  sort(rbegin(p), rend(p));
  sort(rbegin(q), rend(q));
  sort(rbegin(r), rend(r));
  int64_t ans = 0;
  for (int i = 0, a = X, b = Y, c = C; i < X + Y; ++i) {
    auto t = max({ tie(p,a),tie(q,b),tie(r,c) }, [](auto& a, auto& b) {
      return get<1>(a) * get<1>(b) ? get<0>(a).front() < get<0>(b).front() : get<1>(a) == 0;
      });
    auto& que = get<0>(t);
    auto& index = get<1>(t);
    ans += que.front();
    que.pop_front();
    --index;
  }
  cout << ans << endl;
}
