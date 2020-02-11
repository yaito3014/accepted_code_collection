// URL: https://atcoder.jp/contests/abc147/submissions/10046263
// Date: Tue, 11 Feb 2020 12:53:39 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  const int len = S.length();
  int ans = 0;
  for(int i = 0; i < len / 2; ++i)
    if(S[i] != S[len - i - 1])++ans;
  cout << ans << endl;
}
