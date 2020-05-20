// URL: https://atcoder.jp/contests/tenka1-2014-quala/submissions/13421408
// Date: Wed, 20 May 2020 05:16:29 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  using ll = long long;
  string S;
  cin >> S;
  const int T = S.length();
  int kaburins = 5;
  ll damage_sum = 0;
  int combo = 0;
  int wait = 0;
  const array<tuple<int, int, int>, 2> attacks = {{
  	make_tuple(1, 1, 10),
  	make_tuple(3, 3, 50),
  }};
  vector<tuple<int, int, ll>> vec(T + 5);
  for (int t = 0; t < T + 5; ++t) {
    if (wait > 0) --wait;
    if (t < T && S[t] != '-' && wait == 0) {
      int use, time, damage;
      tie(use, time, damage) = attacks[S[t] == 'C'];
      if (use <= kaburins) {
        kaburins -= use;
        wait += time;
        int& attacked = get<0>(vec[t + time]);
        int& used = get<1>(vec[t + time]);
        ll& damages = get<2>(vec[t + time]);
        ++attacked;
        used += use;
        damages += damage + damage * (combo / 10) / 10;
      }
    }
    combo += get<0>(vec[t]);
    if (t >= 5) kaburins += get<1>(vec[t-5]);
    damage_sum += get<2>(vec[t]);
  }
  cout << damage_sum << endl;
}
