#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n),ans(n);
    int l,r;

    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());

    int mn=INT_MAX;
    for(int i=0;i<n-1;i++){
        int x=v[i+1]-v[i];
        if(x<mn){
            mn=x;
            l=i,r=i+1;
        }
    }
    ans[0]=v[l],ans[n-1]=v[r];
    int x=1;
    for(int i=r;i<n;i++){
        if(i==l||i==r) continue;
        ans[x]=v[i];
        x++;
    }
    
    for(int i=0;i<l;i++){
        if(i==l||i==r) continue;
        ans[x]=v[i];
        x++;
    }

    for(int x:ans) cout<<x<<' ';
    cout<<'\n';


}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
