// URL: https://atcoder.jp/contests/gigacode-2019/submissions/8598968
// Date: Sun, 24 Nov 2019 06:33:26 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

struct Edge {
  int to;
  double cost;
  Edge() = default;
  Edge(int to_, double cost_)
    : to(to_), cost(cost_) {}
};

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, L;
  cin >> N >> L;
  int Vs, Ds;
  cin >> Vs >> Ds;
  vector<std::tuple<int, int, int>> XVD(N);
  for (int i = 0; i < N; ++i)
    cin >> get<0>(XVD[i]) >> get<1>(XVD[i]) >> get<2>(XVD[i]);
  XVD.push_back(make_tuple(0, Vs, Ds));
  XVD.push_back(make_tuple(L, Vs, Ds));
  N += 2;
  sort(begin(XVD), end(XVD));
  auto pred1 = [](const tuple<int, int, int>& t, int x) {
    return get<0>(t) < x;
  };
  auto pred2 = [](int x, const tuple<int, int, int>& t) {
    return x < get<0>(t);
  };
  vector<vector<Edge>> nodes(N);
  for (auto& v : nodes)v.reserve(N);
  for (int i = 0; i < N; ++i) {
    int X, V, D;
    tie(X, V, D) = XVD[i];
    auto u = upper_bound(begin(XVD), end(XVD), X + get<2>(XVD[i]), pred2);
    for (auto iter = begin(XVD) + i; iter != u; ++iter) {
      int X2 = get<0>(*iter);
      int to = distance(begin(XVD), iter);
      if (i == to)continue;
      nodes[i].push_back(Edge(to, double(X2 - X) / V));
    }
  }
  const double INF = 40075018;
  vector<double> ans(N, INF);
  ans[0] = 0;
  for (int i = 0; i < N; ++i) {
    for (auto& nxt : nodes[i]) {
      ans[nxt.to] = min(ans[nxt.to], ans[i] + nxt.cost);
    }
  }
  double ans_ = ans[N - 1];
  if (ans_ == INF)cout << "impossible" << endl;
  else cout << fixed << setprecision(6) << ans_ << endl;
}
