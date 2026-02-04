#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,m; cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    int tot=0,ans=0;
    for(int i=0;i<n;i++){
        if(tot+v[i]<=m) tot+=v[i];
        else{
            ans++;
            tot=v[i];
        }
    }
    cout<<++ans;
}
int main(){
    vogoban_vorsha();
    solve();
}
