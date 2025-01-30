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
 
vector<int> parent;

int find(int v) {
    if (v == parent[v]){
        return v;
    }
    return parent[v] = find(parent[v]);
}
void union_set(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b){
        parent[b] = a;
    }
}
void make_set(int v) {
    parent[v] = v;
}

int main(){

    return 0;
}
