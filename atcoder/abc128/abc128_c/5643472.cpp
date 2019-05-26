// URL: https://atcoder.jp/contests/abc128/submissions/5643472
// Date: Sun, 26 May 2019 12:38:03 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int dfs(int n, int N, std::vector<bool> s, const std::vector<std::vector<int>>& l, const std::vector<int>& p) {
    if (n < N) {
        int ans = 0;
        s[n] = true;
        ans += dfs(n + 1, N, s, l, p);
        s[n] = false;
        ans += dfs(n + 1, N, s, l, p);
        return ans;
    }
    else {
        bool ok = true;
        int M = l.size();
        for (int i = 0; i < M; ++i) {
            int count = 0;
            for (auto& v : l[i])if (s[v])++count;
            if ((count & 1) == p[i])continue;
            ok = false;
            break;
        }
        if (ok)return 1;
        else return 0;
    }
}

int main() {

    int N, M;
    std::cin >> N >> M;
    std::vector<bool> switches(N, false);
    std::vector<std::vector<int>> lights(M);
    std::vector<int> p(M);
    for (auto& v : lights) {
        int k;
        std::cin >> k;
        v.resize(k);
        for (auto& v2 : v) {
            int tmp;
            std::cin >> tmp;
            v2 = tmp - 1;
        }
    }
    for (auto& v : p)std::cin >> v;
    int ans = dfs(0, N, switches, lights, p);
    std::cout << ans << std::endl;
}
