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

    for(int i=0;i<n-1;i++){
        if(v[i]==1){
            v[i]++;v[i+1]++;
            if(v[i+1]%v[i]==0) v[i+1]++;
        }
        else{
            if(v[i+1]%v[i]==0) v[i+1]++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(v[i+1]%v[i]==0) v[i+1]++;
    }

    for(int x:v) cout<<x<<' ';
    cout<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
