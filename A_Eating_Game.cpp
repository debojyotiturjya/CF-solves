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

    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    vector<int>tmp=v;
    sort(tmp.rbegin(),tmp.rend());
    int mx=tmp[0];

    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]==mx) ans++;
    }

    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
