// URL: https://atcoder.jp/contests/abc006/submissions/5391828
// Date: Mon, 13 May 2019 14:55:44 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
	
	int n;
	std::cin >> n;
	int a=0;
	int b=0;
	int c=1;
	int tmp;
	switch(n)
	{
		case 1:c=0;break;
		case 2:c=0;break;
		case 3:c=1;break;
	}
	for(int i=0;i<n-3;++i){
		tmp = (a+b+c)%10007;
		a=b;
		b=c;
		c=tmp;
	}
	std::cout << c << std::endl;
}
