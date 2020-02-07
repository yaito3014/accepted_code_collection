// URL: https://atcoder.jp/contests/abc148/submissions/9945685
// Date: Fri, 07 Feb 2020 22:28:50 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	array<string, 2> str;
	cin >> str[0] >> str[1];
	for(size_t index = 0; index < N * 2; ++index)
		cout << str[index % 2][index / 2];
	cout << endl;
}
