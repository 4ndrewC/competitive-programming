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

class segtree{
private:
    vector<int> tree;
    int n;

    int combine(int a, int b) {
        return a + b;
    }

    int sum(int v, int tl, int tr, int l, int r) {      
        if (l > r) return 0;
        if (l == tl && r == tr) return tree[v];
        
        int tm = (tl + tr) / 2;
        return sum(v*2, tl, tm, l, min(r, tm))  + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
    }
    void buildTree(vector<int>& a,int tl, int tr,int v=1){
        if(tl>tr) return;
        if(tl==tr){
            tree[v]=a[tl];
            return;
        }
 
        int mid=(tl+tr)/2;
        buildTree(a,tl,mid,v*2);
        buildTree(a,mid+1,tr,v*2+1);
        tree[v]=tree[v*2]+tree[v*2+1];
    }
    void update(int idx,int val,int v,int tl,int tr){
        if(tl>tr) return;
        if(idx<tl || idx>tr) return;
        if(tl==tr){
            tree[v]=val;
            return;
        }
        int tmid=(tl+tr)/2;
        update(idx,val,v*2,tl,tmid);
        update(idx,val,v*2+1,tmid+1,tr);
        tree[v]=tree[v*2]+tree[v*2+1];
    }

public:
    segtree(int sz,vector<int>& vec){
        n=sz;
        tree.assign(sz*4,0);
        buildTree(vec,0,n-1);
    }
 
    int getSum(int l,int r){
        return sum(1,0,n-1,l,r);
    }
    void update(int idx,int val){
        update(idx,val,1,0,n-1);
    }
 
};

int32_t main(){
    
    return 0;
}
