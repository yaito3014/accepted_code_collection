// URL: https://atcoder.jp/contests/abc137/submissions/6811438
// Date: Sat, 10 Aug 2019 12:16:42 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include "bits/stdc++.h"
using namespace std;

int main() {



  int N;
  cin >> N;
  map<string,int> m;
  for(int i = 0;i<N;++i){
    string s;
    cin >> s;
    sort(begin(s), end(s));
    ++m[s];
  }
  
  int64_t ans = 0;
  for (auto& v : m)
    ans += (int64_t)v.second * (v.second - 1) / 2;
  cout << ans << endl;
}
