#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int t;cin>>t;
    vector<int>v;
    while(t--){
        int a,b,tmp; cin>>a>>b;
        v.push_back(a);
        if(a!=b){
            cout<<"rated"; return;
        }
    }
    for(int i=1;i<v.size();i++){
        if(v[i-1]<v[i]){
            cout<<"unrated"; return;
        }
    }
    cout<<"maybe";

}
int main(){
    vogoban_vorsha();
    solve();
}

