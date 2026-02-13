#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<pair<int,int>>v(n+1);

    for(int i=1;i<n+1;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    
    int ans=0;
    for(int i=1;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
            if(1LL*v[i].first*v[j].first>=2*n) break;
            if(1LL*v[i].first*v[j].first==v[i].second+v[j].second) ans++;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
