#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(v[0]==1 ||v[n-1]==1) cout<<"Alice\n";
    else cout<<"Bob\n";
}
int main(){
    vogoban_vorsha();
    int t;cin>>t; while(t--) solve();
}
