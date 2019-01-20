// URL: https://atcoder.jp/contests/abc116/submissions/4058970
// Date: Sun, 20 Jan 2019 14:08:10 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <map>
int main(){
 int s;
  std::cin >> s;
  std::map<int,bool> a;
  a[s] = true;
  int ans = 1;
  while(a.find(s=s%2?s*3+1:s/2)==a.end()){
    a[s] = true;
    ++ans;
  }
  printf("%d",ans+1);
}
