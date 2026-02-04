#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    string s;cin>>s;
    bool ck=false,ckk=false;
    for(int i=0;i+4<=s.size();i++) {
        if(s.substr(i,4)=="2025") ck=true;
        if(s.substr(i,4)=="2026") ckk=true;
    }
    if(ckk) cout<<0<<endl;
    else if(ck) cout<<1<<endl;
    else cout<<0<<endl;
}
int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--){
        solve();
    }
}

