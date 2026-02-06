#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int k,n;cin>>n>>k;
    vector<int>v(2*n+1); 

    for(int i=0;i<=2*n;i++){
        int x; cin>>x;
        v[i]=x;
    }

    for(int i=1;i<2*n && k>0;i+=2){
        if(v[i]-1>v[i-1] && v[i]-1>v[i+1]){
            v[i]--;k--;
        }
    }
    for(int i:v) cout<<i<<' ';
}
int main(){
    vogoban_vorsha();
    solve();
}
