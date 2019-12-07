// URL: https://atcoder.jp/contests/joi2008yo/submissions/8824599
// Date: Sat, 07 Dec 2019 11:32:29 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> table(2 * n, 0);
  iota(begin(table), end(table), 1);
  set<int> taro, hanako;
  for (int i = 0; i < n; ++i) {
    int n;
    cin >> n;
    taro.insert(n);
  }
  set_difference(begin(table), end(table), begin(taro), end(taro), inserter(hanako, begin(hanako)));
  bool is_taro_turn = true;
  int prev = -1;
  while (!taro.empty() && !hanako.empty()) {
    auto& player = is_taro_turn ? taro : hanako;
    auto iter = player.lower_bound(prev);
    if (iter == player.end())
      prev = -1;
    else {
      prev = *iter;
      player.erase(iter);
    }
    is_taro_turn = !is_taro_turn;
  }
  cout << hanako.size() << endl;
  cout << taro.size() << endl;
}
