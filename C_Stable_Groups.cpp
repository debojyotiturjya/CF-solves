#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; ll k,x; cin>>n>>k>>x;
    vector<ll>v(n),d;

    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());

    for(int i=1;i<n;i++){
        ll x=abs(v[i]-v[i-1]);
        d.push_back(x);
    }
    int ans=1;

    for(int i=0;i<d.size();i++){
        if(d[i]>x){
            if(k>0){
                int need=(d[i]/x);
                d[i]-=need*x;
                k-=need;
            }
            else ans++;
        }
        
    }
    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    solve();
}
