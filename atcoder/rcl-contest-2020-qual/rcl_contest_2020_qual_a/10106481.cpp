// URL: https://atcoder.jp/contests/rcl-contest-2020-qual/submissions/10106481
// Date: Sat, 15 Feb 2020 11:54:52 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include "bits/stdc++.h"
using namespace std;

struct Mino {
  int c, v;
  Mino() = default;
  Mino(int c_, int v_)
    : c(c_), v(v_) {}
};

int main() {
  int N, W, K, V;
  cin >> N >> W >> K >> V;
  vector<Mino> minos(N);
  for (auto& e : minos)cin >> e.c >> e.v;

  auto calc = [&](const vector<int>& ans) {
    vector<deque<Mino>> colomns(W);
    for (int i = 0; i < N; ++i)
      colomns[ans[i]].push_back(minos[i]);
    int H = N;
    for (auto& col : colomns)H = min(H, (int)col.size());
    int score = 0;
    for (int h = 0; h < H; ++h) {
      vector<int> score_row(K, 0);
      for (int w = 0; w < W; ++w) {
        Mino mino = colomns[w][h];
        score_row[mino.c] += mino.v;
      }
      score += *max_element(begin(score_row), end(score_row));
    }
    return score;
  };

  random_device seed_gen;
  mt19937 mt(seed_gen());
  uniform_int_distribution<> dist(0, W - 1);
  vector<int> ans(N);
  int score_max = 0;
  constexpr int Count = 50000;
  for (int i = 0; i < Count; ++i) {
    vector<int> data(N);
    generate(begin(data), end(data), [&]() { return dist(mt); });
    // for (auto& e : data)cout << e << "\n";
    int score = calc(data);
    // cout << "score : " << score << "\n";
    if (score_max < score) {
      ans = data;
      score_max = score;
    }
  }
  // cout << "max_score : " << score_max << "\n";
  for (auto& e : ans)cout << e << "\n";
}
