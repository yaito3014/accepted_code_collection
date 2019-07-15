// URL: https://atcoder.jp/contests/abc052/submissions/6393835
// Date: Mon, 15 Jul 2019 06:31:54 +0000
// Language: C++14 (GCC 5.4.1)
#include "bits/stdc++.h"

int main() {

    int N;
    std::cin >> N;

    //make prime
    std::vector<int> primes;
    primes.reserve(N);
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (std::all_of(begin(primes), end(primes), [&](int p) { return i % p != 0; }))
            primes.push_back(i);
    }

    //count
    std::map<int, int> counts;
    for (int i = 1; i <= N; ++i) {
        for (auto& v : primes)for (int num = i; num % v == 0; num /= v)++counts[v];
    }

    int64_t ans = 1;
    for (auto& v : counts)
        ans = (ans * (v.second + 1)) % 1000000007;

    std::cout << ans << std::endl;
    
}
