// URL: https://atcoder.jp/contests/abc029/submissions/6798550
// Date: Sat, 10 Aug 2019 09:54:02 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = 0;
	for(int i=0;i<12;++i){
		string S;
		cin >> S;
		if(S.find('r')!=string::npos)++ans;
	}
	cout << ans << endl;
}
