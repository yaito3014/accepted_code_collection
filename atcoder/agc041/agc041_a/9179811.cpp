// URL: https://atcoder.jp/contests/agc041/submissions/9179811
// Date: Sat, 28 Dec 2019 12:31:55 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	long long int N, A, B;
	cin >> N >> A >> B;
	long long int ans;
	if(abs(A-B)%2)
		ans = min((A+B-1)/2,(N-A+1+N-B+1-1)/2);
	else
		ans = abs(A-B)/2;
	cout << ans << endl;
}
