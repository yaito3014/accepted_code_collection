// URL: https://atcoder.jp/contests/past201912-open/submissions/10783845
// Date: Thu, 12 Mar 2020 14:59:33 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr); ios::sync_with_stdio(false);
  int N, Q;
  cin >> N >> Q;
  vector<vector<bool>> follow(N, vector<bool>(N, false));
  auto nxt = follow;
  for(int i = 0; i < Q; ++i){
    int t, a;
    cin >> t >> a, --a;
    if(t == 1){
  		int b;
  		cin >> b, --b;
  	  nxt[a][b] = true;
  	} else if (t == 2) {
  		for(int j = 0; j < N; ++j)
  			if(follow[j][a])nxt[a][j] = true;
  	} else {
  	  for(int j = 0; j < N; ++j)if(follow[a][j])
  		  for(int k = 0; k < N; ++k)if(a!=k&&follow[j][k])
  	      nxt[a][k] = true;
  	}
  	follow = nxt;
  }
  for(int i = 0; i < N; ++i){
  	for(int j = 0; j < N; ++j)
  		cout << (follow[i][j]?'Y':'N');
  	cout << '
';
  }
}
