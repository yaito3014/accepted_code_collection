// URL: https://atcoder.jp/contests/abc174/submissions/15640774
// Date: Sun, 02 Aug 2020 13:42:37 +0000
// Language: C++ (GCC 9.2.1)
// Copyright 2020 yaito3014
#include <iostream>
#include <set>

int main() {
  int K;
  std::cin >> K;
  std::set<int> s;
  int ans = -1;
  long long j = 7 % K;
  for (int i = 0; ; ++i, j = (j * 10 + 7) % K) {
  	if (j == 0) {
  	  ans = i + 1;
  	  break;
  	}
  	if (s.find(j) != s.end()) break;
  	s.insert(j);
  	
  }
  std::cout << ans << '\n';
}
