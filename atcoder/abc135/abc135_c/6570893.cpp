// URL: https://atcoder.jp/contests/abc135/submissions/6570893
// Date: Sat, 27 Jul 2019 12:23:29 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	vector<int> A(N+1), B(N);
	for(auto&v:A)cin >> v;
	for(auto&v:B)cin >> v;
	int64_t ans = 0;
	for(int i=0;i<N;++i){
		if(A[i]<=B[i]){
			ans += A[i];
			B[i]-=A[i];
			if(A[i+1]<=B[i]){
				ans += A[i+1];
				A[i+1]=0;
			}else{
				ans += B[i];
				A[i+1]-=B[i];
			}
		} else {
			ans += B[i];
		}
	}
	cout << ans << endl;
}
