// URL: https://atcoder.jp/contests/abc033/submissions/7912823
// Date: Tue, 08 Oct 2019 22:37:29 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	string N;
	cin >> N;
	bool ans = all_of(begin(N),end(N),[n=N[0]](char c){ return n==c; });
	cout << (ans?"SAME":"DIFFERENT") << endl;
}
