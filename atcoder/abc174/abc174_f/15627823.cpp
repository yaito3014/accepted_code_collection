// URL: https://atcoder.jp/contests/abc174/submissions/15627823
// Date: Sun, 02 Aug 2020 13:01:31 +0000
// Language: C++ (GCC 9.2.1)
// :(

// C++ code to find number of distinct numbers 
// in a subarray 
#include<bits/stdc++.h> 

using namespace std; 

  

const int MAX = 1000001; 

  
// structure to store queries 

struct Query 
{ 

    int l, r, idx; 
}; 

  
// cmp function to sort queries according to r 

bool cmp(Query x, Query y) 
{ 

    return x.r < y.r; 
} 

  
// updating the bit array 

void update(int idx, int val, int bit[], int n) 
{ 

    for (; idx <= n; idx += idx&-idx) 

        bit[idx] += val; 
} 

  
// querying the bit array 

int query(int idx, int bit[], int n) 
{ 

    int sum = 0; 

    for (; idx>0; idx-=idx&-idx) 

        sum += bit[idx]; 

    return sum; 
} 

void answeringQueries(std::vector<int> a, std::vector<Query> qu) 
{ 

    // initialising bit array 

    int bit[a.size()+1]; 

    memset(bit, 0, sizeof(bit)); 

  

    // holds the rightmost index of any number 

    // as numbers of a[i] are less than or equal to 10^6 

    int last_visit[MAX]; 

    memset(last_visit, -1, sizeof(last_visit)); 
  

    // answer for each query 

    int ans[qu.size()]; 

    int query_counter = 0; 

    for (int i=0; i<a.size(); i++) 

    { 

        // If last visit is not -1 update -1 at the 

        // idx equal to last_visit[arr[i]] 

        if (last_visit[a[i]] !=-1) 

            update (last_visit[a[i]] + 1, -1, bit, a.size());

  

        // Setting last_visit[arr[i]] as i and updating 

        // the bit array accordingly 

        last_visit[a[i]] = i; 

        update(i + 1, 1, bit, a.size()); 

  

        // If i is equal to r of any query  store answer 

        // for that query in ans[] 

        while (query_counter < qu.size() && qu[query_counter].r == i) 

        { 

            ans[qu[query_counter].idx] = 

                     query(qu[query_counter].r + 1, bit, a.size())- 

                     query(qu[query_counter].l, bit, a.size()); 

            query_counter++; 

        } 
        
    } 

  

    // print answer for each query 

    for (int i=0; i<qu.size(); i++) 

        cout << ans[i] << endl; 
} 

  
// driver code 

int main() { 
  int N, Q;
  std::cin >> N >> Q;
  std::vector<int> c(N);
  for (auto& e : c) std::cin >> e;
  std::vector<Query> queries(Q);
  for (int i = 0; i < Q; ++i)
    std::cin >> queries[i].l >> queries[i].r, --queries[i].l, --queries[i].r, queries[i].idx = i;
  std::sort(begin(queries), end(queries), cmp); 
  answeringQueries(c, queries); 
}
