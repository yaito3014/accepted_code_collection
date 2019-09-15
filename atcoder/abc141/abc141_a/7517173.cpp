// URL: https://atcoder.jp/contests/abc141/submissions/7517173
// Date: Sun, 15 Sep 2019 12:03:22 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"
using namespace std;

int main() {

  array<string, 3> Arr = {
    "Sunny","Cloudy","Rainy"
  };
  string S;
  cin >> S;
  int i = std::distance(begin(Arr), std::find(begin(Arr), end(Arr), S));
  ++i; i %= 3;
  cout << Arr[i] << endl;

}
