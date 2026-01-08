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

void xen(){

    int n, m; cin >> n >> m;
    vector<vector<pair<int,int>>> g(n);
    vector<ll> dist(n, INF);

    auto dijkstra = [&](int s) {
        fill(dist.begin(), dist.end(), INF);
        priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
        dist[s] = 0;
        pq.push({0, s});
        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (d != dist[u]) continue;
            for (auto [v, w] : g[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }
    };

    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) xen();
    return 0;

}
