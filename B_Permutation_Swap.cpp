#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n+1);

    for(int i=1;i<=n;i++) cin>>v[i];

    int ans=0;
    for(int i=1;i<n+1;i++){
        if(i!=v[i]){
            int x=abs(i-v[i]);
            ans=gcd(x,ans);
        }
    }
    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
