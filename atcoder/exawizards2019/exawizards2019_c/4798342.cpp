// URL: https://atcoder.jp/contests/exawizards2019/submissions/4798342
// Date: Mon, 01 Apr 2019 14:21:27 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);
    int N, Q;
    std::string s;

    //入力
    std::cin >> N >> Q;
    std::cin >> s;

    std::vector<std::pair<char, char>> spells(Q);
    for (auto& i : spells)std::cin >> i.first >> i.second;
    //入力終わり

    //二分探索書くの面倒だから標準ライブラリに任せたいがための配列
    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i)arr[i] = i;

    //左に落ちる：-1
    //右に落ちる： 1
    //マスに残る： 0
    auto func = [&](int v) {
        for (const auto& i : spells) {
            if (v < 0 || N <= v)break;
            if (s[v] == i.first)v += (i.second == 'L' ? -1 : 1);
        }
        if (v < 0)return -1;
        if (N <= v)return 1;
        return 0;
    };

    //左に落ちるゴーレムの中で一番右のやつ
    auto itr = std::partition_point(arr.cbegin(), arr.cend(), [&](int v) { return func(v) < 0; });
    //右に落ちるゴーレムの中で一番左のやつ
    auto itr2 = std::partition_point(arr.crbegin(), arr.crend(), [&](int v) { return func(v) > 0; });

    //上の2者の距離を出せばいい
    std::cout << std::distance(itr,itr2.base()) << std::endl;
}
