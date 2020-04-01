// URL: https://atcoder.jp/contests/tenka1-2014-qualb/submissions/11423041
// Date: Wed, 01 Apr 2020 16:14:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  constexpr int Mod = 1000000007;
  int N;
  cin >> N;
  string S;
  cin >> S;
  int len = S.length();
  vector<string> T(N);
  for(auto& e : T)cin >> e;
  vector<long long> dp(len + 1, 0);
  dp[0] = 1;
  for(int i = 0; i < len; ++i) {
    for(int j = 0; j < N; ++j) {
    	int l = T[j].length();
      if(i + l > len || S.substr(i, l) != T[j])continue;
      dp[i + l] += dp[i];
      dp[i + l] %= Mod;
    }
  }
  cout << dp[len] << endl;
}
