#include <bits/stdc++.h>
using namespace std;

vector<int>adj[1000000];
int vis[100000],par[100000],cost[100000];

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void bfs(int s,int n){
    for(int i=1;i<=n;i++){
        cost[i]=0;
        par[i]=-1;
        vis[i]=0;
    }

    vis[s]=1;cost[s]=0;par[s]=s;
    queue<int>q; q.push(s);

    while(!q.empty()){
        int u=q.front();
        q.pop();

        for(int v:adj[u]){
            // int v=adj[u][i];

            if(!vis[v]){
                vis[v]=1;
                par[v]=u;
                cost[v]=cost[u]+1;
                q.push(v);
            }
        }
    }
}

void solve(){
    int n,m; cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1,n);

    if(cost[n]==0) cout<<-1<<'\n';
    else cout<<cost[n]<<'\n';

}
int main(){
    vogoban_vorsha();
    solve();
}
