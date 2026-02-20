#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    ll n,h; cin>>n>>h;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int>df;

    for(int i=1;i<n;i++) df.push_back(v[i]-v[i-1]);

    ll l=0,r=1e18,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        long long sum=0;
        for(int i=0;i<df.size();i++) sum+=min(1LL*df[i],mid);

        if(sum+mid>=h){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
