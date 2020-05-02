// URL: https://atcoder.jp/contests/abc165/submissions/12636902
// Date: Sat, 02 May 2020 13:32:15 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  // d,a,b,c
  using Ti4 = tuple<int, int, int, int>;
  int N, M, Q;
  cin >> N >> M >> Q;
  vector<Ti4> abcd(Q);
  for (auto& [a, b, c, d] : abcd)cin >> a >> b >> c >> d, --a, --b;
  // sort(begin(abcd), end(abcd));
  vector<int> arr(N, 1);
  int ans = 0;
  auto dfs = [&](auto&& f) {
    return [=](auto&&...args) {
      return f(f, forward<decltype(args)>(args)...);
    };
  }(
    [&](auto&& self, int n, int a) -> void {
      if (n == N) {
        int sum = 0;
        for (const auto& [a, b, c, d] : abcd)
          if (arr[b] - arr[a] == c)sum += d;
        ans = max(ans, sum);
        return;
      }
      for (; a <= M; ++a) {
        arr[n] = a;
        self(self, n + 1, a);
      }
    }
  );
  dfs(0, 1);
  cout << ans << endl;
}
