// URL: https://atcoder.jp/contests/abc166/submissions/13590942
// Date: Mon, 25 May 2020 07:04:19 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  array<int, 3> ABC = {};
  {
    auto& [A, B, C] = ABC;
    cin >> N >> A >> B >> C;
  }
  vector<pair<int, int>> choices(N);
  for (auto& p : choices) {
    string s;
    cin >> s;
    p = make_pair(s[0] - 'A', s[1] - 'A');
  }
  vector<int> ans(N);
  auto dfs = [](auto&& f) {
    return
        [=](auto&&... args) { return f(f, forward<decltype(args)>(args)...); };
  }([&](auto&& self, int n) -> bool {
    if (n == N) return true;
    auto& [f, s] = choices[n];
    ++ABC[f], --ABC[s];
    ans[n] = f;
    if (ABC[f] >= 0 && ABC[s] >= 0)
      if (self(self, n + 1)) return true;
    ABC[f] -= 2;
    ABC[s] += 2;
    ans[n] = s;
    if (ABC[f] >= 0 && ABC[s] >= 0)
      if (self(self, n + 1)) return true;
    ++ABC[f], --ABC[s];
    return false;
  });
  bool res = dfs(0);
  cout << (res ? "Yes" : "No") << '\n';
  if (res)
    for (const auto& e : ans) cout << char('A' + e) << '\n';
}
