// URL: https://atcoder.jp/contests/abc146/submissions/8608886
// Date: Sun, 24 Nov 2019 12:07:14 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  string S;
  cin >> N >> S;
  int n = 'Z' - 'A' + 1;
  for (auto& c : S)c = ((c + N - 'A') % n + 'A') & 0xff;
  cout << S << endl;
}
