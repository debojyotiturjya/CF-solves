#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    ll n;cin>>n;ll a,b;
    if(n%2==0) a=b=n/2;
    else{
        ll d=1;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                if(n/i<=n/2)d=n/i;
                else d=i;
                break;
            }
        }
        a=d;b=n-d;
    }
    cout<<a<<' '<<b<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
        solve();
}
