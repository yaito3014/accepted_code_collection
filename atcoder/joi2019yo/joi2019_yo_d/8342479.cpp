// URL: https://atcoder.jp/contests/joi2019yo/submissions/8342479
// Date: Sat, 09 Nov 2019 05:18:53 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto&v:A)cin >> v;
	vector<pair<int,int>> s(N);
	for(int i=0;i<N;++i)
		s[i] = make_pair(A[i],i);
	sort(begin(s),end(s));
	int num = 0;
	for(int i=0;i<N;++i)
		if(A[i]>0&&(i==0||A[i-1]==0))++num;
	int ans = num;
	for(int i=0;i<N;++i){
		int h = s[i].first;
		int c = s[i].second;
		if(h==0)continue;
		int p = c==0?0:A[c-1];
		int n = c==N-1?0:A[c+1];
		if(p<h&&n<h)--num;
		else if (p>=h&&n>=h)++num;
		--A[c];
		if(i==N-1||s[i+1].first!=h)
			ans = max(ans,num);
	}
	cout << ans << endl;
}
