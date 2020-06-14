// URL: https://atcoder.jp/contests/abc170/submissions/14374688
// Date: Sun, 14 Jun 2020 22:43:51 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>

int main() {
  using namespace std;
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for (auto& e : A) cin >> e;
  sort(begin(A), end(A));
  vector<bool> table(A.back() + 1, true), looked(A.back() + 1, false);
  for (const auto& e : A)
    if (table[e]) {
    	if (looked[e]) {
    		table[e] = false;
    		continue;
    	}
    	looked[e] = true;
      for (int i = 2; i * e <= A.back(); ++i)
 	      table[i * e] = false;
    }
  int ans = 0;
  for (const auto& e : A) if (table[e]) ++ans;
  cout << ans << '\n';
}
