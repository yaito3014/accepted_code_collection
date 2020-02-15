// URL: https://atcoder.jp/contests/abc028/submissions/10100379
// Date: Sat, 15 Feb 2020 07:04:43 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2020 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	double ans = (6.0*(K-1)*(N-K)+3.0*(K-1)+3.0*(N-K)+1)/N/N/N;
	cout << fixed << setprecision(10) << ans << endl;
}
