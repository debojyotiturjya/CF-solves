#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,q; cin>>n>>q;
    vector<long long>v(n+1),psm(n+1);
    long long sum=0;
    for(int i=1;i<=n;i++){
        
        cin>>v[i]; sum+=v[i];
        psm[i]=sum;
    }

    for(int i=0;i<q;i++){
        int l,r,k; cin>>l>>r>>k;
        long long diff=psm[r]-psm[l-1],nw=1LL*k*(r-l+1);
        long long nsm=nw-diff;

        if((psm[n]+nsm)%2==1) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
