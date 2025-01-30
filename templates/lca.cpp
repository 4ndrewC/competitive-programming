#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <unordered_set>
#include <algorithm>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef __gnu_pbds::tree<ll, __gnu_pbds::null_type, less_equal<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define endl "\n"

#define debug(lab) (cout<<"here "<<lab<<endl)

int LOG = 17, maxn = 1e5+5;
vector<vector<int>> g;
vector<vector<int>> parent(maxn, vector<int>(LOG));
vector<int> d(maxn);

void build(int node, int p){
    for(int next: g[node]){
        if(next!=p){
            d[next] = d[node]+1;
            parent[next][0] = node;
            for(int j = 1; j<LOG; j++){parent[next][j] = parent[parent[next][j-1]][j-1];}
            build(next, node);
        }
    }
}

int lca(int a, int b){
    if(d[a]<d[b]){
        int temp = a;
        a = b;
        b = temp;
    }
    int k = d[a]-d[b];
    for(int i = LOG-1; i>=0; i--){
        if(k&(1<<i)){
            a = parent[a][i];
        }
    }
    if(a==b) return a;

    for(int i = LOG-1; i>=0; i--){
        if(parent[a][i]!=parent[b][i]){
            a = parent[a][i];
            b = parent[b][i];
        }
    }
    return parent[a][0];
    
}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    return 0;
}
