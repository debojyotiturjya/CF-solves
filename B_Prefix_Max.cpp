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
    // int ans=0;
    sort(v.rbegin(),v.rend());
    cout<<v[0]*n<<'\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
