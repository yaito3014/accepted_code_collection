// URL: https://atcoder.jp/contests/abc115/submissions/3743150
// Date: Sat, 08 Dec 2018 12:27:08 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>

int main(){
  int N;
  std::cin >> N;
  int sum = 0;
  int max = 0;
  for(int i = 0;i<N;++i){
    int p;
    std::cin >> p;
    sum += p;
    max = std::max(max, p);
  }
  std::cout << sum-max/2 << std::endl;
}
