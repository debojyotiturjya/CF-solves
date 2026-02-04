#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n,k; 

bool ck(int x,vector<int>&v){
    long long mop=0;
    for(int i=n/2;i<n;i++){
        if(v[i]<x) mop+=x-v[i];
    }
    return mop<=k;
}

void solve(){
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int l=0,r=2e9,ans=0;

    while(l<=r){
        int mid=l+(r-l)/2;

        if(ck(mid,v)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    solve();
}
