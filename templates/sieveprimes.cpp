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

int modinv(int a, int p){
    return static_cast<int>(pow(a,p-2))%p;
}

int moddiv(int a, int b, int p){
    int b_inv = modinv(b,p);
    return (a*b_inv)%p;
}

int n = 3200;

void xen(){
    vi prime(n+1,1), primes;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for(int i = 2; i<=n; i++){
        if(prime[i]){
            primes.pb(i);
        }
    }
    cout<<primes.size()<<endl;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    xen();
    return 0;
}