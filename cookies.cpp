#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v;
    int tot=0,ans=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        tot+=x; v.push_back(x);
    }

    for(int i=0;i<n;i++){
        if((tot-v[i])%2==0) ans++;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}

