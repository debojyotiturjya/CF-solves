#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,q; cin>>n>>q;
    vector<long long>v(n),vq(q);

    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<q;i++) cin>>vq[i];

    
   vector<pair<long long,long long>>pre(n);
   pre[0].first=v[0];
   pre[0].second=v[0];

   for(int i=1;i<n;i++){
      pre[i].first=max(pre[i-1].first,v[i]);
      pre[i].second=pre[i-1].second+v[i];
   }

   for(int i=0;i<q;i++){
     int l=0,h=n-1,mid;
     long long ans=0;
        while(l<=h){
            mid=(l+h)/2;
            if(vq[i]>=pre[mid].first){
                ans=pre[mid].second;
                l=mid+1;
            }
            else h=mid-1;
        }
        cout<<ans<<' ';
   }
   cout<<'\n';
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
