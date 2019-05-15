// URL: https://atcoder.jp/contests/abc013/submissions/5404251
// Date: Wed, 15 May 2019 03:23:55 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main(){
  int a,b;
  std::cin >> a >> b;
  int dif = std::abs(a-b);
  std::cout << std::min(dif,10-dif) << std::endl;
}
