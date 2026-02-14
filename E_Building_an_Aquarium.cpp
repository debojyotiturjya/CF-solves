#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

long long wata(long long x,int n,vector<long long> &v){
    long long sum=0;
    for(int i=0;i<n;i++) if(v[i]<x) sum+=x-v[i];

    return sum;
}

void solve(){
    int n,x; cin>>n>>x;
    vector<long long>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    long long l=0,r=2e18;
    long long ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;

        long long hgt=wata(mid,n,v);
        if(hgt<=x){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
