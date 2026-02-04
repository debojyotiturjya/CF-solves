#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    string s="ROYGBIV",ss="GBIV",ans="";

    int x=n/7;
    for(int i=0;i<x;i++) ans+=s;

    for(int i=0;i<(n%7);i++) ans+=ss[i%4];

    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}
