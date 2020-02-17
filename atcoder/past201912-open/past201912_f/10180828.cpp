// URL: https://atcoder.jp/contests/past201912-open/submissions/10180828
// Date: Mon, 17 Feb 2020 11:19:29 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;
#include <boost/algorithm/string/predicate.hpp>

int main() {
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  int len = S.length();
  deque<string> que;
  int prev = 0;
  for(int i = 1; i < len; ++i){
  	if(S[i] < 'A' || 'Z' < S[i])continue;
  	if(prev==i)continue;
  	que.push_back(S.substr(prev, i - prev + 1));
  	prev = i+1;
  }
  auto cmp = [](const auto& lhs, const auto& rhs){
  	return boost::algorithm::ilexicographical_compare(lhs,rhs);
  };
  sort(begin(que), end(que), cmp);
  for(auto&e:que)cout << e;
  cout << endl;
}
