#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    long long s,k,m;
    cin >>s>>k>>m;

    long long lf=(m/k)*k;        
    long long remt=min(lf,s);
    long long kata=m-lf;           
    long long ans=remt-kata;

    if(ans<0) ans=0;
    cout<<ans<<'\n';
}

int main(){
    vogoban_vorsha();
    int t;cin>>t; while(t--) solve();
}
