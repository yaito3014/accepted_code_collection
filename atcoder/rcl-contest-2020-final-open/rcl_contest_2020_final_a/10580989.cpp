// URL: https://atcoder.jp/contests/rcl-contest-2020-final-open/submissions/10580989
// Date: Sat, 07 Mar 2020 07:27:49 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  array<int, 6> dice_count, dice = { { 1, 2, 3, 4, 5, 6 } };
  dice_count.fill(1);
  auto modify = [&](int index, int value) {
    int old = dice[index];
    --dice_count[dice[index] - 1];
    ++dice_count[value - 1];
    dice[index] = value;
    return old;
  };
  vector<int> field(N + 1, 0);
  field[N] = 5000;
  int read_count = 0;
  auto dice_next = [&](int n, int v) {
    n += v;
    if (n > N)n = 2 * N - n;
    return n;
  };
  auto fix = [](auto&& f) {
    return[f = forward<decltype(f)>(f)](auto&&...args){
      return f(f, forward<decltype(args)>(args)...);
    };
  };
  constexpr int Depth = 4;
  constexpr double alpha = 0.99, beta = 2.0;
  auto eval_rec = fix([&](auto&& self, int x, int d) -> double {
    double score = 0;
    for (int k = 0; k < 6; ++k) {
      int nxt = dice_next(x, k + 1);
      double s = field[nxt];
      if (d > 1)s += self(self, nxt, d - 1) * (alpha + (beta - alpha) * (d - 1) / (Depth - 1));
      score += dice_count[k] * s;
    }
    return score / 6;
    });
  auto trans = [&](int cur) {
    pair<int, int> res{ 0,dice[0] };
    double max_score = 0;
    for (int i = 0; i < 6; ++i) {
      for (int j = 1; j <= 6; ++j) {
        int orig = modify(i, j);
        double score = eval_rec(cur, Depth);
        modify(i, orig);
        if (score > max_score) {
          res = make_pair(i, j);
          max_score = score;
        }
      }
    }
    modify(res.first, res.second);
  };
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < 6; ++j)
      cout << dice[j] << " ";
    cout << endl;
    //for (int j = 0; j < 6; ++j)
    //  cerr << dice_count[j] << " ";
    //cerr << endl;
    int d, v, x;
    cin >> d >> v >> x;
    field[x] = v;
    if (i < 5)modify(i + 1, 1);
    else if (read_count < N)++read_count;
    else trans(x);
  }
}
