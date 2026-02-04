#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='1') v.push_back(i);
    } 
    int ans=v.size();
    if(v.empty()){
        cout<<(n+2)/3<<"\n";
        return;
    }
    int l=v[0];
    if(l>0) ans+=(l-1+2)/3;
    for(int i=1;i<v.size();i++){
        int g=v[i]-v[i-1]-1;
        if(g>0) ans+=max(0,(g-2+2)/3);
    }
    int r=n-1-v.back();
    if(r>0) ans+=(r-1+2)/3;
    cout<<ans<<"\n";
}
int main(){
    vogoban_vorsha();
    int t;cin>>t;while(t--)solve();
}
