// URL: https://atcoder.jp/contests/abc128/submissions/5637483
// Date: Sun, 26 May 2019 12:08:10 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int main() {

    int N;
    std::cin >> N;
    std::vector<std::pair<int, std::pair<std::string, int>>> restaurant(N);
    for (int i = 0; i < N; ++i) {
        std::string S;
        int P;
        std::cin >> S >> P;
        restaurant[i] = std::make_pair(i, std::make_pair(S, P));
    }
    auto comp = [](const auto& a, const auto& b) {
        return (a.second.first == b.second.first) ? a.second.second > b.second.second:a.second.first < b.second.first;
    };
    std::sort(restaurant.begin(), restaurant.end(), comp);
    for (int i = 0; i < N; ++i) {
        std::cout << restaurant[i].first+1 << "
";
    }

}
