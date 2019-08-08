// URL: https://atcoder.jp/contests/abc028/submissions/6767150
// Date: Thu, 08 Aug 2019 06:07:37 +0000
// Language: C++ (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	string ans =
		(N<60)?"Bad":
		(N<90)?"Good":
		(N<100)?"Great":
		"Perfect";
	cout << ans << endl;
}
