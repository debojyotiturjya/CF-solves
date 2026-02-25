#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    ll n,m,d; cin>>n>>m>>d;

    ll h=d/m+1;
    ll ans=(n+h-1)/h;

    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
