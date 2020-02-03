// URL: https://atcoder.jp/contests/abc149/submissions/9891245
// Date: Mon, 03 Feb 2020 18:02:54 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
	long long A, B, K;
	cin >> A >> B >> K;
	if(A < K)B = max(0ll, B - (K - A));
	A = max(0ll, A - K);
	cout << A << " " << B << endl;
}
