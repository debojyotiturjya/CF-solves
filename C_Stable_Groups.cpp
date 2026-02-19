#include <bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; 
    ll k,x; 
    cin>>n>>k>>x;

    vector<ll>v(n),d;

    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());


    for(int i=1;i<n;i++){
        ll z=v[i]-v[i-1];  
        if(z>x) d.push_back((z-1)/x);   
    }

    sort(d.begin(),d.end());  

    ll ans=d.size()+1;     

    for(int i=0;i<d.size() && k>=d[i];i++){
            k-=d[i]; ans--;             
    }

    cout<<ans<<'\n';
}

int main(){
    vogoban_vorsha();
    solve();
}
