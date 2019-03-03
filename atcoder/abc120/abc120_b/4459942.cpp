// URL: https://atcoder.jp/contests/abc120/submissions/4459942
// Date: Sun, 03 Mar 2019 14:10:40 +0000
// Language: C++14 (GCC 5.4.1)
#include <iostream>
#include <algorithm>
int main(){
    int A,B,K;std::cin>>A>>B>>K;
    int i=std::max(A,B);
    for(;K;--i)if(!(A%i||B%i))--K;
    std::cout<<i+1<<std::endl;
}
