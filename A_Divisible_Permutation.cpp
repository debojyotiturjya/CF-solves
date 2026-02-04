#include<bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    v[n-1]=1;
    v[n-2]=n;
    for(int i=n-3;i>=0;i--){
        if(v[i+1]-(i+1)<1)v[i]=v[i+1]+(i+1);
        else v[i]=v[i+1]-(i+1);
        
        bool ck=false;
        for(int j=i+1;j<n;j++){
            if(v[j]==v[i]){
                ck=true;
                break;
            }
        }
        if(ck){
            v[i]=v[i+1]+(i+1);
        }
    }
    for(int i:v)cout<<i<<' ';
    cout<<'\n';
}
int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--)solve();
}