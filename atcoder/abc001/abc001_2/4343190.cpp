// URL: https://atcoder.jp/contests/abc001/submissions/4343190
// Date: Thu, 21 Feb 2019 22:45:53 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <iomanip>

int main(){
	int m;std::cin>>m;
	int vv = 0;
	vv = 
	m<100?0:
	m<=5000?m/100:
	m<=30000?m/1000+50:
	m<=70000?(m/1000-30)/5+80:89;
	
	std::cout << std::setfill('0') << std::setw(2) << vv << std::endl;
}
