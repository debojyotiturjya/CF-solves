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
    vector<int>v;
    int p=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        p+=x;
        v.pb(p);
    }
    int m; cin>>m;
    vector<int>vv(m);
    for(int i=0;i<m;i++) cin>>vv[i];

    for(int i=0;i<m;i++){
        int ans= lower_bound(v.begin(),v.end(),vv[i])-v.begin();

        cout<<ans+1<<'\n';
    }


}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
        solve();
}
