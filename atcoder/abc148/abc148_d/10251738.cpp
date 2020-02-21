// URL: https://atcoder.jp/contests/abc148/submissions/10251738
// Date: Fri, 21 Feb 2020 22:21:14 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
	int N;
	cin >> N;
	int ans = 0;
	for(int i = 0, j = 1; i < N; ++i){
		int a;
		cin >> a;
		if(a==j)++j;
		else ++ans;
	}
	if(ans==N)ans = -1;
	cout << ans << endl;
}
