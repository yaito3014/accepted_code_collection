// URL: https://atcoder.jp/contests/abc125/submissions/5177404
// Date: Sun, 28 Apr 2019 12:58:59 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

template<class T>
class segmentTree {
private:
    std::vector<T> data;
    size_t size;

    int getGCD(size_t l, size_t r, size_t k, size_t left, size_t right) const {
        if (right <= l || r <= left)return 0;
        if (l <= left && right <= r)return data[k];
        T a = getGCD(l, r, k * 2 + 1, left, (left + right) / 2);
        T b = getGCD(l, r, k * 2 + 2, (left + right) / 2, right);
        return gcd(a, b);
    }

public:
    template<class Itr>
    segmentTree(Itr first, Itr last) {
        size_t dif = std::distance(first, last);
        size = 1;
        while (size < dif)size <<= 1;
        data.resize(2 * size - 1, 0);
        for (size_t i = 0; i < dif; ++i, ++first)update(i, *first);
    }

    void update(size_t i, int value) {
        i += size - 1;
        data[i] = value;
        while (i > 0) {
            i = (i - 1) / 2;
            data[i] = gcd(data[i * 2 + 1], data[i * 2 + 2]);
        }
    }

    T getGCD(size_t l, size_t r) const {
        return getGCD(l, r, 0, 0, size);
    }

    void show()const {
        for (size_t i = 0; i < 2 * size - 1; ++i) {
            std::cout << data[i] << ",";
            if (!((i + 2) & (i + 1)))std::cout << '\n';
        }
    }

};

template<class Itr>
auto make_segmentTree(Itr first, Itr last) {
    return segmentTree<std::remove_reference_t<decltype(*first)>>(first, last);
}

int main() {

    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for (auto& i : A)std::cin >> i;

    auto seg = make_segmentTree(A.begin(), A.end());
    //seg.show();
    int ans = -1;
    for (int i = 0; i < N; ++i) {
        ans = std::max(ans, gcd(seg.getGCD(0, i), seg.getGCD(i + 1, N)));
    }
    std::cout << ans << std::endl;
}
