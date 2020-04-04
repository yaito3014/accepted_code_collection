// URL: https://atcoder.jp/contests/donuts-2015/submissions/11482291
// Date: Sat, 04 Apr 2020 08:15:19 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (auto& e : A)cin >> e;
  struct Combo {
  	int bonus;
  	int idols;
  };
  vector<Combo> combos(M);
  for (auto& combo : combos) {
  	cin >> combo.bonus;
  	int C;
  	cin >> C;
  	for (int i = 0; i < C; ++i) {
  		int idol;
  		cin >> idol, --idol;
  	  combo.idols |= (1 << idol);
  	}
  }
  int ans = 0;
  constexpr int Group = 9;
  const int Max = 1 << N;
  for (int mask = 0; mask < Max; ++mask) {
  	if (bitset<32>(mask).count() != 9)continue;
  	int score = 0;
  	for (int i = 0; i < N; ++i)
  	  if((mask>>i)&1)score += A[i];
  	for (const auto& combo : combos)
  		if (bitset<32>(mask&combo.idols).count() >= 3)
  		  score += combo.bonus;
  	ans = max(ans, score);
  }
  cout << ans << endl;
}
