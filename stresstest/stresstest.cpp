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

int n, m, k, q, l, r, t;

random_device rd;
mt19937_64 gen(rd());
uniform_int_distribution<int> dist(1, 1);

int random(int a, int b) {
    dist.param(uniform_int_distribution<int>::param_type(a, b));
    return dist(gen);
}

void test(){
    n = 10;
    
}


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t = 1;
    while(t--) test();
    return 0;
}

