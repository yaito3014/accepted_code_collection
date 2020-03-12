// URL: https://atcoder.jp/contests/past201912-open/submissions/10776947
// Date: Thu, 12 Mar 2020 09:29:14 +0000
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
  for(int i = 0; i < N - 1; ++i){
  	int diff = A[i+1] - A[i];
  	if(diff == 0){
  		cout << "stay" << endl;
  	}
  	else cout << (diff>0?"up ":"down ") << abs(diff) << endl;
  }
}
