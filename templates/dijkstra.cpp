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

int n, m;
vi dist;
vvi g;

int minDistance(vi dist, vi sptSet)
{

    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < n; v++)
        if (sptSet[v] == 0 && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void dijkstra(vvi graph, int src)
{
    vi sptSet(n);
    for (int i = 0; i < n; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < n; v++)
            if (!sptSet[v] && graph[u][v]
                && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
}


void xen(){
    cin>>n>>m;
    int u, v, w;
    vvi g(n, vi(n));
    for(int i = 0; i<n; i++){
        cin>>u>>v>>w;
        --u; --v;
        g[u][v] = w;
        g[v][u] = w;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) xen();
    return 0;
}