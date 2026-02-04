#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    long long a,b; cin>>a>>b;
    if(b!=1){
        long long x=a,y=a*b,z=x+y;
        cout<<"YES\n"<<x<<' '<<y<<' '<<z<<'\n';
    }
    else cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--){
        solve();
    }
}


