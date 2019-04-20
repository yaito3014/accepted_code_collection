// URL: https://atcoder.jp/contests/abc057/submissions/5035050
// Date: Sat, 20 Apr 2019 10:32:07 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
 
int main(){
	long long int N=0,n,maxi=-1,ans=0;
	cin>>N;
	n=sqrt(N);
	for(long long int i=1;i<=n;i++)
	{
		if(N%i==0)maxi =N/i;
	}
	n=1;
	for(long long int i=1;maxi>=n;i++)
	{
		n*=10;
		ans =i;
	}
	cout<<ans;
	return 0;
	}
