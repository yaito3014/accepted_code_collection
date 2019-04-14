// URL: https://atcoder.jp/contests/abc124/submissions/4971966
// Date: Sun, 14 Apr 2019 10:01:14 +0000
// Language: C++14 (GCC 5.4.1)
#include <bits/stdc++.h>
int main() {
    std::cin.tie(nullptr); std::ios::sync_with_stdio(false);

    int N, K;
    std::string S;
    std::cin >> N >> K;
    std::cin >> S;

    //連続して直立、逆立ちしてる人数を数えて保存する。
    //0を許して直立始まり直立終わりにしておく。
    std::vector<int> counts;

    counts.reserve(N);//push_back高速化
    int count = 1;//連続した人数
    if (S.front() == '0')counts.push_back(0);//直立始まりにする
    for (int i = 1; i < N; i++) {
        if (S[i - 1] == S[i])++count;//連続していればカウントを増やす
        else {
            //連続していなければ保存して次のカウントへ
            counts.push_back(count);
            count = 1;
        }
    }
    counts.push_back(count);//最後をもれなく追加
    if (S.back() == '0')counts.push_back(0);//直立終わりにする

    int size = counts.size();//後で使うのでサイズ保存
    std::vector<int> sum(size + 1, 0);//累積和 sum[0] = 0 であることに注意
    for (int i = 0; i < size; i++) sum[i + 1] = sum[i] + counts[i];//計算する
    int ans = 0;
    for (int i = 0; i < size; i += 2)
        ans = std::max(ans, sum[std::min(i + 2 * K + 1, size)] - sum[i]);//iから連続して直立にしたときの最大値

    std::cout << ans << std::endl;
}
