// URL: https://atcoder.jp/contests/abc014/submissions/5702889
// Date: Thu, 30 May 2019 11:30:15 +0000
// Language: C++14 (GCC 5.4.1)
#ifndef YK_INCLUDE
#include <bits/stdc++.h>
#endif //! YK_INCLUDE

namespace yaito {

	struct LCA{
		template<class T>
		using vec = std::vector<T>;
		
	    const int N;
	    const int LOG2_N;
	    vec<vec<int>> parent_table;
	    vec<int> depth_table;
	    const vec<vec<int>>& graph;
	    LCA(const vec<vec<int>>& graph) :
	        graph(graph),
	        N(graph.size()),
	        LOG2_N(std::log2(N)+1),
	        depth_table(N,-1),
	        parent_table(N,vec<int>(LOG2_N,-1)){}
	        
	    void dfs(int index, int parent, int depth){
	        parent_table[index][0] = parent;
	        depth_table[index] = depth;
	        for(auto&next:graph[index])
	            if(next!=parent)dfs(next,index,depth+1);
	    }
	
	    void build(int root = 0){
	        dfs(root,-1,0);
	        for(int k = 0; k < LOG2_N-1; ++k){
	        	for(int i = 0; i < N; ++i){
	                if(parent_table[i][k]==-1)parent_table[i][k+1] = -1;
	               else parent_table[i][k+1]=parent_table[parent_table[i][k]][k];
	            }
	        }
	    }
	    
	    int get(int a, int b){
	        if(depth_table[b]<depth_table[a])std::swap(a,b);
	        for(int i = LOG2_N-1; i >= 0; --i)
	            if(((depth_table[b]-depth_table[a])>>i)&1)b = parent_table[b][i];
	        if(a==b)return a;
	        for(int i = LOG2_N-1; i >= 0; --i){
	            if(parent_table[a][i]==parent_table[b][i])continue;
	            a = parent_table[a][i];
	            b = parent_table[b][i];
	        }
	        return parent_table[a][0];
	    }
	        
	};
	
}

int main() {
	
	int N;
	std::cin >> N;
	std::vector<std::vector<int>> nodes(N);
	for(int i=0;i<N-1;++i){
		int x,y;
		std::cin >> x >> y;
		nodes[x-1].push_back(y-1);
		nodes[y-1].push_back(x-1);
	}
	yaito::LCA lca(nodes);
	lca.build();
	
	int Q;
	std::cin >> Q;
	for(int i=0;i<Q;++i){
		int a,b;
		std::cin >> a >> b;
		int ad = lca.depth_table[a-1];
		int bd = lca.depth_table[b-1];
		int lca_ = lca.get(a-1,b-1);
		int lca_d = lca.depth_table[lca_];
		int ans = ad+bd-lca_d*2+1;
		std::cout << ans << "\n";
	}
	
}
