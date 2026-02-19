#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    ll n,l,r; cin>>n>>l>>r;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());

    ll ans=0;

    for(int i=0;i<n;i++){
        ll lt=l-v[i],rt=r-v[i];
        ll lans=lower_bound(v.begin()+i+1,v.end(),lt)-v.begin();
        ll rans=upper_bound(v.begin()+i+1,v.end(),rt)-v.begin();
        
        ans=ans+rans-lans;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
