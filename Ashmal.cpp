#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        string s; cin>>s;
        v.push_back(s);
    }
    string ss="",sss="",sans="";

    for(int i=0;i<v.size();i++){
        ss=sans+v[i];
        sss=v[i]+sans;
        sans=min(sss,ss);
    }
    cout<<sans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--){
        solve();
    }
}

