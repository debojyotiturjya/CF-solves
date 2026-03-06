#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    ll n,m; cin>>n>>m;
    vector<ll>vd(n+1),vl(m);
    vd[0]=0;

    for(ll i=1;i<=n;i++){
        ll x; cin>>x;
        vd[i]=vd[i-1]+x;
    }
    for(ll i=0;i<m;i++) cin>>vl[i];

    for(ll i=0;i<m;i++){
        ll ans= lower_bound(vd.begin()+1,vd.end(),vl[i])-vd.begin();

        cout<<ans<<' '<<vl[i]-vd[ans-1]<<'\n';
    }
}
int main(){
    vogoban_vorsha();
    // ll t; cin>>t; 
    // while(t--) 
    solve();
}
