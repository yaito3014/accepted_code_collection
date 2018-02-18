// URL: https://atcoder.jp/contests/joi2014yo/submissions/2106462
// Date: Sun, 18 Feb 2018 02:07:02 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 int students[5] = {};
 int ans = 0;
 for (int i = 0;i < 5;i++){
  cin >> students[i];
  ans += max(students[i],40);
 }
 cout << ans / 5 << endl;
 
 return 0;
}
