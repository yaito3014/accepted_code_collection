// URL: https://atcoder.jp/contests/abc126/submissions/10557175
// Date: Fri, 06 Mar 2020 03:24:04 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int M, K;
  cin >> M >> K;
  int64_t N = 1;
  N <<= M;
  if((M==1&&K==1)||K >= N){
  	cout << -1 << endl;
  	return 0;
  }
  if(M==1&&K==0){
  	cout << 0 << " " << 0 << " " << 1 << " " << 1 << endl;
  	cout << endl;
  	return 0;
  }
  cout << K << " ";
  for(int64_t i = N - 1; i >= 0; --i)
 		if(i != K)cout << i << " ";
  cout << K << " ";
 	for(int64_t i = 0; i < N; ++i)
 		if(i != K)cout << i << " ";
  cout << endl;
}
