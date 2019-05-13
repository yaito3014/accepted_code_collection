// URL: https://atcoder.jp/contests/abc006/submissions/5393198
// Date: Mon, 13 May 2019 22:23:06 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	int N,M;
	std::cin >> N >> M;
	int ans1=-1,ans2=-1,ans3=-1;
	for(int i=0;i<=N;++i){
		int m=M-i*2;
		if(m<(N-i)*3||(N-i)*4<m)continue;
		ans1=i;
		ans2=(N-i)*4-m;
		ans3=N-ans1-ans2;
		break;
	}
	std::cout << ans1 << " " << ans2 << " " << ans3 << std::endl;	
}
