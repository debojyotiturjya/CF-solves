#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    double l,p,q;cin>>l>>p>>q; double ans=((p*l)/(p+q))*1.0;
    cout<<ans;
}
int main(){
    vogoban_vorsha();
    solve();
}
