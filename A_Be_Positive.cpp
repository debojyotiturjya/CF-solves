#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mc=0,zc=0;
    
    for(int i=0;i<n;i++){
        if(v[i]==0)zc++;
        if(v[i]==-1) mc++;
    }
    if(mc%2==0) cout<<zc<<'\n';
    else cout<<zc+2<<'\n';
}
int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--)solve();
}
