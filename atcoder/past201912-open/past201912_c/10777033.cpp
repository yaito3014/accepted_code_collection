// URL: https://atcoder.jp/contests/past201912-open/submissions/10777033
// Date: Thu, 12 Mar 2020 09:34:35 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  array<int, 6> num;
  for(auto& e : num)cin >> e;
  sort(rbegin(num), rend(num));
  cout << num[2] << endl;
}
