#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long ans=v[0];
    for(int i=0;i<n;i++) ans&=v[i];
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--){
        solve();
    }
}

