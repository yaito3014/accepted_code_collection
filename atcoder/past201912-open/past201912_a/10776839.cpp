// URL: https://atcoder.jp/contests/past201912-open/submissions/10776839
// Date: Thu, 12 Mar 2020 09:23:54 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  string S;
  cin >> S;
  if(any_of(cbegin(S), cend(S), (int(*)(int))isalpha))
  	cout << "error" << endl;
  else
  	cout << stoi(S) * 2 << endl;
}
