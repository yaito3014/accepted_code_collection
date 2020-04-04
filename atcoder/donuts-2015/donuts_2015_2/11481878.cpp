// URL: https://atcoder.jp/contests/donuts-2015/submissions/11481878
// Date: Sat, 04 Apr 2020 08:01:34 +0000
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
  	vector<int> idols;
  };
  vector<Combo> combos(M);
  for (auto& combo : combos) {
  	cin >> combo.bonus;
  	int C;
  	cin >> C;
  	combo.idols.resize(C);
  	for (auto& idol : combo.idols)cin >> idol, --idol;
  	sort(begin(combo.idols), end(combo.idols));
  }
  constexpr int Group = 9;
  int ans = 0;
  array<int, Group> idols;
  auto dfs = [](auto&& f) {
  	return [=](auto&&... args) {
  		return f(f, std::forward<decltype(args)>(args)...);
  	};
  }(
    [&](auto&& self, int num, int prev) -> void {
      if(num == Group) {
      	int score = 0;
      	for (const auto& idx : idols)
      	  score += A[idx];
      	for (const auto& combo : combos) {
      		vector<int> inter;
      		set_intersection(begin(idols), end(idols),
      		    begin(combo.idols), end(combo.idols), back_inserter(inter));
      		if (inter.size() >= 3)
      		  score += combo.bonus;
      	}
      	ans = max(ans, score);
      	return;
      }
      for (int nxt = prev + 1; nxt < N; ++nxt) {
      	idols[num] = nxt;
      	self(self, num + 1, nxt);
      }
    }
  );
  dfs(0, -1);
  cout << ans << endl;
}
