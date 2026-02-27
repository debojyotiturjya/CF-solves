#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll n; cin>>n;
    ll k=1;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            k*=i;
            while(n%i==0) n/=i;
        }
    }
    if(n>1) k*=n;

    cout<<k<<'\n';
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}