// URL: https://atcoder.jp/contests/abc148/submissions/10228686
// Date: Thu, 20 Feb 2020 11:25:32 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b){
  return b?gcd(b,a%b):a;
}

long long int lcm(long long int a, long long int b){
  return a / gcd(a, b) * b;
}

int main(){
  int A, B;
  cin >> A >> B;
  cout << lcm(A, B) << endl;
}
