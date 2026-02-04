#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,t; cin>>n>>t;
    int b=7-t;

    bool ck=true;
    for(int i=0;i<n;i++){
        vector<bool>v(7,false);
        if(i==0){
            int x,y;cin>>x>>y;
        }
        else{
            int x,y; cin>>x>>y;
            v[x]=true;v[7-x]=true;v[y]=true;v[7-y]=true;
            if(v[b]==false){
                b=7-b;
            }
            else{
                ck= false;
                break;
            }
        }
    }
    if(ck) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    solve();
}

