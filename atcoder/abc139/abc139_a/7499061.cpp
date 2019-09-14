// URL: https://atcoder.jp/contests/abc139/submissions/7499061
// Date: Sat, 14 Sep 2019 09:21:31 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
	string S,T;
	cin >> S >> T;
	int ans = 0;
	for(int i=0;i<3;++i)
		if(S[i]==T[i])++ans;
	cout << ans << endl;
}
