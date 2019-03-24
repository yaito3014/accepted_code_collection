// URL: https://atcoder.jp/contests/abc122/submissions/4686961
// Date: Sun, 24 Mar 2019 12:03:31 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__


int main() {   
    char b; std::cin >> b;
    char ans;
    switch (b) {
    case 'A':ans = 'T'; break;
    case 'C':ans = 'G'; break;
    case 'G':ans = 'C'; break;
    case 'T':ans = 'A'; break;
    }
    std::cout << ans << std::endl;

}
