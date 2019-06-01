// URL: https://atcoder.jp/contests/abc023/submissions/5720873
// Date: Sat, 01 Jun 2019 07:26:56 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC__

int main() {

    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;
    bool ans = N & 1;
    std::array<char, 3> arr = { 'a','b','c' };
    int index = 3 - (N / 2) % 3;
    for (auto& v : S) {
        if (v != arr[++index % 3])ans = false;
        if (!ans)break;
    }
    std::cout << (ans ? N / 2 : -1) << std::endl;

}
