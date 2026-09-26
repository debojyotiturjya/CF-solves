#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    bool ck=true;
    if(n==2) cout<<0<<'\n';
    else{
        int ans=0;
        for(int i=1;i<n-1;i++){
            if(v[i]>v[0] &&v[i]<v[n-1]) ans++;
        }
        cout<<ans<<'\n';
    }
}
int main(){
    vogoban_vorsha();
    solve();
}
