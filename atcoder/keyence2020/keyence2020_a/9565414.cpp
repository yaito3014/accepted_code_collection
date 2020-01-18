// URL: https://atcoder.jp/contests/keyence2020/submissions/9565414
// Date: Sat, 18 Jan 2020 12:11:21 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	cin.tie(nullptr); ios::sync_with_stdio(false);
	int H, W, N;
	cin >> H >> W >> N;
	int ans = ceil(float(N)/max(H, W));
	cout << ans << endl;
}
