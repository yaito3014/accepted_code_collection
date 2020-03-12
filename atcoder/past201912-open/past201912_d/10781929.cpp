// URL: https://atcoder.jp/contests/past201912-open/submissions/10781929
// Date: Thu, 12 Mar 2020 13:38:30 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> A(N);
  for(auto& e : A)cin >> e;
  vector<int> table(N, 0);
  int x=-1,y=-1;
  bool correct = true;
  for(int i = 0; i < N; ++i){
  	int n = ++table[A[i]-1];
  	if(n!=1){
  		y = A[i];
  		correct = false;
  	}
  }
  if(!correct)
  for(int i = 0; i < N; ++i){
  	if(table[i]!=0)continue;
  	x = i + 1;
  	break;
  }
  if(correct)cout << "Correct" << endl;
  else cout << y << " " << x << endl;
}
