// URL: https://atcoder.jp/contests/abc012/submissions/5404126
// Date: Wed, 15 May 2019 03:00:39 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main(){
  const int Sum = 2025;
  
  int N;
  std::cin >> N;
  
  int ans = Sum - N;
  for(int i = 1;i<=9;++i){
    if(ans%i==0&&ans/i<=9)
      printf("%d x %d
",i,ans/i);
  }
  
}
