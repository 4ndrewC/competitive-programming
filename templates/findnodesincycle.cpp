void dfs(int node, int parent){
    if(seen[node]) return;
    s.push(node);
    seen[node]=1;
    curcyc[node]=1;
    for(int next: g[node]){
        if(!seen[next] && next!=parent) {
            dfs(next, node);
        }
        else{
            if(next==parent || !curcyc[next]) continue;
            stack<int> temp;
            while(!s.empty() && s.top()!=next){
                cyc.pb(s.top());
                temp.push(s.top());
                s.pop();
            }
            cyc.pb(next);
            for(int i: cyc) cout<<i<<" ";
            cout<<endl;
            cyc.clear();
            while(!temp.empty()){
                s.push(temp.top());
                temp.pop();
            }
        }
    }
    s.pop();
    curcyc[node]=0;
}