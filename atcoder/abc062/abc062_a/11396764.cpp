// URL: https://atcoder.jp/contests/abc062/submissions/11396764
// Date: Tue, 31 Mar 2020 13:26:46 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int x, y;
  cin >> x >> y;
  const vector<vector<int>> groups = {
    { 1,3,5,7,8,10,12},
    { 4,6,9,11 },
    { 2 },
  };
  for (auto& group : groups) {
    if (count(begin(group), end(group), x) && count(begin(group), end(group), y)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
