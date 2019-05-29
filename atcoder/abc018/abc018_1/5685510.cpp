// URL: https://atcoder.jp/contests/abc018/submissions/5685510
// Date: Wed, 29 May 2019 08:18:01 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

int main() {
    
    int A,B,C;
    std::cin >> A >> B >> C;
    std::cout<<((A>B)?(A>C)?1:2:(A>C)?2:3)<<"
";
    std::cout<<((B>C)?(B>A)?1:2:(B>A)?2:3)<<"
";
    std::cout<<((C>A)?(C>B)?1:2:(C>B)?2:3)<<"
";
        
}
