// URL: https://atcoder.jp/contests/abc122/submissions/5181944
// Date: Mon, 29 Apr 2019 03:01:38 +0000
// Language: C++14 (GCC 5.4.1)
#ifdef __GNUC__
#include <bits/stdc++.h>
#endif // __GNUC_

namespace yaito {
    template<class T, class Func>
    class segmentTree {
    private:
        std::vector<T> data;
        size_t size;
        Func func;

        int get(size_t l, size_t r, size_t k, size_t left, size_t right) const {
            if (right <= l || r <= left)return 0;
            if (l <= left && right <= r)return data[k];
            T a = get(l, r, k * 2 + 1, left, (left + right) / 2);
            T b = get(l, r, k * 2 + 2, (left + right) / 2, right);
            return func(a, b);
        }

    public:
        template<class Itr>
        segmentTree(Itr first, Itr last, Func func, T init) : func(func) {
            size_t dif = std::distance(first, last);
            size = 1;
            while (size < dif)size <<= 1;
            data.resize(2 * size - 1, init);
            for (size_t i = 0; i < dif; ++i, ++first)update(i, *first);
        }

        void update(size_t i, int value) {
            i += size - 1;
            data[i] = value;
            while (i > 0) {
                i = (i - 1) / 2;
                data[i] = func(data[i * 2 + 1], data[i * 2 + 2]);
            }
        }

        T get(size_t l, size_t r) const {
            return get(l, r, 0, 0, size);
        }

        void show()const {
            for (size_t i = 0; i < 2 * size - 1; ++i) {
                std::cout << data[i] << ", ";
                if (!((i + 2) & (i + 1)))std::cout << '
';
            }
        }

    };

    template<class T, class Itr, class Func>
    auto make_segmentTree(Itr first, Itr last, Func func, T init) {
        return segmentTree<T, Func>(first, last, func, init);
    }

}

int main() {

    int N, Q;
    std::string S;
    std::cin >> N >> Q;
    std::cin >> S;
    std::vector<int> ACs(N, 0);
    for (int i = 1; i < N; ++i)if (S[i - 1] == 'A' && S[i] == 'C')ACs[i] = 1;
    auto seg = yaito::make_segmentTree(ACs.begin(), ACs.end(), [](int a, int b) {return a + b; }, 0);
    for (int i = 0; i < Q; ++i) {
        int l, r;
        std::cin >> l >> r;
        std::cout << seg.get(l, r) << std::endl;
    }

}
