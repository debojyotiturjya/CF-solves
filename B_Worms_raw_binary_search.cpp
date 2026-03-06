#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n+1),psm(n+1);

    for(int i=1;i<=n;i++) cin>>v[i];

    vector<pair<int,int>>vv(n+1);
    int last=0;

    for(int i=1;i<=n;i++){
        vv[i]={last+1,last+v[i]};
        last+=v[i];
    }


    int m; cin>>m;

    while(m--){
        int x; cin>>x;
        int l=1,r=n,mid,ans=-1;

        while(l<=r){
            mid=(l+r)/2;
            
            if(vv[mid].first<=x && x<=vv[mid].second){
                ans=mid;
                break;
            }
            else if(vv[mid].first>x) r=mid-1;
            else l=mid+1;
            
        }
        cout<<ans<<'\n';
    }


}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
        solve();
}
