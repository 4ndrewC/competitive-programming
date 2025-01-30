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

int MAX_M = 26;

vector<vector<int>> tr;
vector<bool> isEndOfWord;

void init() {
    tr.push_back(vector<int>(MAX_M + 1, -1));
    isEndOfWord.push_back(false);
}

void insert(vector<int>& permutation) {
    int currentNode = 0;

    for (int num : permutation) {
        if (tr[currentNode][num] == -1) {
            tr.push_back(vector<int>(MAX_M + 1, -1));
            isEndOfWord.push_back(false);
            tr[currentNode][num] = tr.size() - 1;
        }
        currentNode = tr[currentNode][num];
    }
    
    isEndOfWord[currentNode] = true;
}

bool search(vector<int>& permutation) {
    int currentNode = 0; 

    for (int num : permutation) {
        if (tr[currentNode][num] == -1) {
            return false;
        }
        currentNode = tr[currentNode][num];
    }

    return isEndOfWord[currentNode];
}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    return 0;
}

