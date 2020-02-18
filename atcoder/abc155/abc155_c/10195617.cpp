// URL: https://atcoder.jp/contests/abc155/submissions/10195617
// Date: Tue, 18 Feb 2020 09:11:24 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<string> S(N);
  for (auto& e : S)cin >> e;
  unordered_map<string, int> m;
  int M = 0;
  for (auto& e : S)
    M = max(M,++m[e]);
  vector<string> ans;
  for(auto&p:m)if(p.second==M)ans.push_back(p.first);
 	sort(begin(ans), end(ans));
 	for(auto&e:ans)cout<<e<<"
";
}
