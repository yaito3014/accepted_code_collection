// URL: https://atcoder.jp/contests/abc002/submissions/5078897
// Date: Sun, 21 Apr 2019 13:31:49 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {
    std::string W;
    std::cin >> W;
    auto pred = [](char c) {
        switch (c)case 'a':case 'i':case 'u':case 'e':case 'o':return true;
        return false;
    };

    W.erase(std::remove_if(W.begin(), W.end(), pred), W.end());

    std::cout << W << std::endl;

}
