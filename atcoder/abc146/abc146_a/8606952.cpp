// URL: https://atcoder.jp/contests/abc146/submissions/8606952
// Date: Sun, 24 Nov 2019 12:04:27 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  const array<string, 7> Month = {
    "SUN","MON","TUE","WED","THU","FRI","SAT"
  };
  string S;
  cin >> S;
  int i = distance(begin(Month), find(begin(Month), end(Month), S));
  cout << 7 - i << endl;
}
