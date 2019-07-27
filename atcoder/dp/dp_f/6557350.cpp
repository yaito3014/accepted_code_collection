// URL: https://atcoder.jp/contests/dp/submissions/6557350
// Date: Sat, 27 Jul 2019 08:34:34 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin >> s >> t;
	int s_l = s.length();
	int t_l = t.length();
	vector<vector<int>> dp(s_l+1,vector<int>(t_l+1,0));
	for(int i=0;i<s_l;++i)
		for(int j=0;j<t_l;++j)
			if(s[i]==t[j])
				dp[i+1][j+1]=dp[i][j]+1;
			else
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
	string ans;
	int i=s_l;
	int j=t_l;
	while(i>0&&j>0){
		if(dp[i][j]==dp[i][j-1])--j;
		else if(dp[i][j]==dp[i-1][j])--i;
		else {
			--i;--j;
			ans.push_back(s[i]);
		}
	}
	reverse(begin(ans),end(ans));
	cout << ans << endl;
}
