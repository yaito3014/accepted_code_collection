// URL: https://atcoder.jp/contests/abc173/submissions/14976693
// Date: Sun, 05 Jul 2020 12:07:24 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>
#include <string>
#include <map>

int main() {
  int N;
  std::cin >> N;
  std::map<std::string, int> m;
  for (int i = 0; i < N; ++i) {
    std::string S;
    std::cin >> S;
    ++m[S];
  }
  std::cout << "AC x " << m["AC"] << '\n';
  std::cout << "WA x " << m["WA"] << '\n';
  std::cout << "TLE x " << m["TLE"] << '\n';
  std::cout << "RE x " << m["RE"] << '\n';
}
