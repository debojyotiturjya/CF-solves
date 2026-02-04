#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,s,x; cin>>n>>s>>x;
    vector<int>v(n);
    int sum=0;

    for(int i=0;i<n;i++){
        cin>>v[i]; sum+=v[i];
    }

    if(sum<=s &&(sum-s)%x==0) cout<<"YES"<<'\n';
    else cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
