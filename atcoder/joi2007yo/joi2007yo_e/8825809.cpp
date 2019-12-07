// URL: https://atcoder.jp/contests/joi2007yo/submissions/8825809
// Date: Sat, 07 Dec 2019 12:49:58 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  int N;
  cin >> N;
  struct Result {
    int i, j, k, r;
  };
  vector<Result> results(N);
  for (auto& v : results) {
    cin >> v.i >> v.j >> v.k >> v.r;
    --v.i; --v.j; --v.k;
  }
  vector<int> ans(a+b+c, -2);
  for (auto& v : results)
    if (v.r)ans[v.i] = ans[v.j] = ans[v.k] = 1;
  while (true) {
    bool found =false;
    for (auto& v : results) {
      if (v.r)continue;
      if (ans[v.i] * ans[v.j] * ans[v.k] == -2) {
        if (ans[v.i] != 1)ans[v.i] = 0;
        else if (ans[v.j] != 1)ans[v.j] = 0;
        else if (ans[v.k] != 1)ans[v.k] = 0;
        found = true;
      }
    }
    if (!found)break;
  }
  for (auto& v : ans)if (v == -2)v = 2;
  for (auto& v : ans)cout << v << '\n';
}
