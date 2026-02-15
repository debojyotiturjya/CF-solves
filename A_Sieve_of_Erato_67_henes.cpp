#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    bool ck=false;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x==67) ck=true;
    } 
    if(ck) cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
