#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    vector<long long>pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++) pre[i]=pre[i-1]+v[i];

    long long tot=pre[n-1];
    if(tot%3!=0){
        cout<<0<<'\n';
        return;
    }

    long long c=0,ans=0;
    for(int i=0;i<=n-2;i++){
        if(pre[i]==2*(tot/3)) ans+=c;
        if(pre[i]==tot/3)c++;
    }
    
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}
