#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    vector<int>vs(n);
    vs[n-1]=max(a[n-1],b[n-1]);
    for(int i=n-2;i>=0;i--) vs[i]=max(max(a[i],b[i]),vs[i+1]);

    vector<long long>vv(n);
    for(int i=0;i<n;i++) vv[i]=max(b[i],vs[i]);

    vector<long long>vp(n+1,0);
    for(int i=0;i<n;i++) vp[i+1]=vp[i]+vv[i];

    while(q--){
        int l,r; cin>>l>>r;
        l--;r--;
        cout<<vp[r+1]-vp[l]<<" ";
    }
    cout<<'\n';
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
