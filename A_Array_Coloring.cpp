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

    vector<pair<int,char>>vv;
    for(int i=0;i<n;i++){
        if(i%2==0) vv.push_back({v[i],'r'});
        else vv.push_back({v[i],'b'});
    }
    sort(vv.begin(),vv.end());

    bool ck=true;
    for(int i=0;i<n-1;i++){
        if(vv[i].second== vv[i+1].second){
            ck=false; break;
        }
    }
    if(ck) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
