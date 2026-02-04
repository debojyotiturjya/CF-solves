#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,m;
    cin>>n;
    int x=sqrtl(n);
    if(x*x==n) cout<<0<<" "<<x<<'\n';
    else cout<<-1<<'\n';
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
