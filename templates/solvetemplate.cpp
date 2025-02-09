#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <unordered_set>
#include <algorithm>

using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef __gnu_pbds::tree<ll, __gnu_pbds::null_type, less_equal<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define int long long
#define pb push_back
#define mp make_pair
#define pi pair<int, int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define endl "\n"

#define debug(lab) (cout<<"here "<<lab<<endl)

int gcdextended(int a, int b, int *x, int *y){
    if(a == 0){
        *x = 0, *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdextended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int modinv(int b, int m){
    int x, y;
    int g = gcdextended(b, m, &x, &y);
    return (x%m + m) % m;
}

int moddiv(int a, int b, int m){
    a = a % m;
    int inv = modinv(b, m);
    return (inv*a)%m;
}

void xen(){

}


int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t; cin>>t;
    while(t--) xen();
    return 0;
}
