#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,x; cin>>n>>x;
    vector<ll>v(n);

    ll sumn=0,sumx=0;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) sumn+=v[i];
    for(int i=0;i<n;i++) v[i]=(v[i]+x-1)/x;
    for(int i=0;i<n;i++) sumx+=v[i];

    ll mn=(sumn+x-1)/x;
    cout<<mn<<' '<<sumx<<'\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
