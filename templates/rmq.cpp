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


vector<vector<int>> build(const vector<int>& arr) {
    int n = arr.size();
    int log_n = log2(n) + 1;
    vector<vector<int>> sparseTable(n, vector<int>(log_n));
    for (int i = 0; i < n; ++i) {
        sparseTable[i][0] = arr[i];
    }
    for (int j = 1; (1 << j) <= n; ++j) {
        for (int i = 0; i + (1 << j) - 1 < n; ++i) {
            sparseTable[i][j] = max(sparseTable[i][j - 1], sparseTable[i + (1 << (j - 1))][j - 1]);
        }
    }
    return sparseTable;
}

int qmax(const vector<vector<int>>& sparseTable, int L, int R) {
    int j = log2(R - L + 1);
    return max(sparseTable[L][j], sparseTable[R - (1 << j) + 1][j]);
}

vector<vector<int>> buildmin(const vector<int>& arr) {
    int n = arr.size();
    int log_n = log2(n) + 1;
    vector<vector<int>> sparseTable(n, vector<int>(log_n));
    for (int i = 0; i < n; ++i) {
        sparseTable[i][0] = arr[i];
    }
    for (int j = 1; (1 << j) <= n; ++j) {
        for (int i = 0; i + (1 << j) - 1 < n; ++i) {
            sparseTable[i][j] = min(sparseTable[i][j - 1], sparseTable[i + (1 << (j - 1))][j - 1]);
        }
    }
    return sparseTable;
}

int qmin(const vector<vector<int>>& sparseTable, int L, int R) {
    int j = log2(R - L + 1);
    return min(sparseTable[L][j], sparseTable[R - (1 << j) + 1][j]);
}


int main(){
    vector<int> a = {1};
    vector<vector<int>> st = build(a);

    return 0;
}