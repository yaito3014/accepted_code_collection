// URL: https://atcoder.jp/contests/abc139/submissions/7499103
// Date: Sat, 14 Sep 2019 09:24:43 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
	int A, B;
	cin >> A >> B;
	cout << (B-1)/(A-1)+((B-1)%(A-1)?1:0) << endl;
}
