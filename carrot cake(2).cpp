#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,t,k,d; cin>>n>>t>>k>>d;

    int f=((n+k-1)/k)*t;
    if(f>d+t) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    solve();
}
