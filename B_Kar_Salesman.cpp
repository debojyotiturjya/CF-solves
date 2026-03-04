#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll n,x; cin>>n>>x;
    vector<ll>v(n);

    ll tot=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        tot+=v[i];
    }
    sort(v.rbegin(),v.rend());
    ll mx=v[0];

    ll l=0,r=1e18;
    ll ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;

        if(mid*x>=tot && mid>=mx){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    cout<<l<<'\n';
}

int main(){
    vogoban_vorsha();
    ll t;cin>>t; 
    while(t--) 
    solve();
}