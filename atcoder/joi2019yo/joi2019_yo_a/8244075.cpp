// URL: https://atcoder.jp/contests/joi2019yo/submissions/8244075
// Date: Fri, 01 Nov 2019 22:38:53 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	cin.tie(0); ios::sync_with_stdio(0);
	int A,B,C;
	cin >> A >> B >> C;
	div_t r = div(C,A*7+B);
	int ans = r.quot*7+min(r.rem/A+(r.rem%A?1:0),7);
	cout << ans << endl;
}
