// URL: https://atcoder.jp/contests/abc028/submissions/6798341
// Date: Sat, 10 Aug 2019 09:39:04 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
using namespace std;

int main(){
	array<int, 5> In;
	for(auto&v:In)cin >> v;
	std::vector<int> sums(10);
	for(int i=0,c=0;i<5;++i)
	for(int j=i+1;j<5;++j)
	for(int k=j+1;k<5;++k,++c)
		sums[c]=In[i]+In[j]+In[k];
	sort(rbegin(sums), rend(sums));
	int ans = sums[2];
	cout << ans << endl;
}
