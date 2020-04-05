// URL: https://atcoder.jp/contests/judge-update-202004/submissions/11586771
// Date: Sun, 05 Apr 2020 12:27:25 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  constexpr int Num = 3;
  array<int, Num> a;
  for (auto& e : a)cin >> e;
  int N = reduce(begin(a), end(a));
  int a_max = *max_element(begin(a), end(a));
  array<vector<int>, Num> blocks;
  for (int i = 0; i < Num; ++i)blocks[i].resize(a[i]);
  int ans = 0;
  vector<int> perm(N);
  iota(begin(perm), end(perm), 0);
  do {
    auto iter = begin(perm);
    for (auto& tower : blocks)for (auto& block : tower)block = *(iter++);
    bool ok = true;
    for (int i = 0; i < Num - 1; ++i) {
      for (int j = 0; j < a_max; ++j) {
        if (blocks[i].size() <= j || blocks[i + 1].size() <= j)continue;
        if (blocks[i][j] < blocks[i + 1][j])continue;
        ok = false;
        goto end_loop;
      }
    }
  end_loop:
    ok = ok && all_of(begin(blocks), end(blocks), [](auto& c) { return is_sorted(begin(c), end(c)); });
    if (ok)++ans;
  } while (next_permutation(begin(perm), end(perm)));
  cout << ans << endl;
}
