// URL: https://atcoder.jp/contests/joi2017yo/submissions/8823263
// Date: Sat, 07 Dec 2019 09:42:02 +0000
// Language: C++14 (GCC 5.4.1)
// Copyright 2019 yaito3014
#include <bits/stdc++.h>
using namespace std;
using namespace literals;

int main(){
	int N, M;
	cin >> N >> M;
	vector<int> toys(N);
	for(auto&v:toys)cin >> v;
	vector<vector<int>> sum(N+1,vector<int>(M,0));
	for(int i=0;i<N;++i)
		++(sum[i+1]=sum[i])[toys[i]-1];
	const int Max = 1<<M;
	constexpr int INF = INT_MAX;
	vector<int> dp(Max,INF);
	dp[0] = 0;
	for(int mask=0;mask<Max;++mask){
		for(int i=0;i<M;++i){
			if((mask>>i)&1)continue;
			int nxt = mask | (1<<i);
			int pos = 0;
			for(int j=0;j<M;++j)
				if((mask>>j)&1)pos += sum[N][j];
			int num = sum[N][i];
			dp[nxt]=min(
				dp[nxt],
				dp[mask]+num-(sum[pos+num][i]-sum[pos][i])
			);
		}
	}
	cout << dp[Max-1] << endl;
}
