#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    long long x,n; cin>>x>>n;

    int mod=n%4;

    for(long long i=n-mod+1;i<=n;i++){
        if(x%2==0) x-=i;
        else x+=i;
    }
    cout<<x<<'\n';
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
