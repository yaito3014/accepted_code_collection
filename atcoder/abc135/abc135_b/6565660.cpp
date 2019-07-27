// URL: https://atcoder.jp/contests/abc135/submissions/6565660
// Date: Sat, 27 Jul 2019 12:09:18 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	vector<int> p(N);
	for(auto&v:p)cin >> v;
	for(int i=0;i<N;++i){
		if(p[i]!=i+1){
			swap(p[i],p[p[i]-1]);
			break;
		}
	}
	bool ans = is_sorted(begin(p),end(p));
	cout << (ans?"YES":"NO") << endl;
}
