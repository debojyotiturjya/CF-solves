#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; cin>>n;

    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];

    vector<bool> vis(n+1,false);
    bool ck=true;

    for(int i=1;i<=n && ck;i++){
        if(vis[i]) continue;

        vector<int> ind,val;
        for(int x=i;x<=n;x*=2){
            ind.push_back(x);
            val.push_back(v[x]);
            vis[x]=true;
        }

        sort(ind.begin(),ind.end());
        sort(val.begin(),val.end());

        for(int j=0;j<ind.size();j++)
            if(val[j]!=ind[j]){
                ck=false;
                break;
            }
    }

    if(ck) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
