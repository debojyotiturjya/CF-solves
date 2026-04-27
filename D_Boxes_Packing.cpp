#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define elif else if
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int ck(int n,int k,vector<int>v, int mid){
    int b=1,sum=0;
    for(int i=mid;i<n;i++){
        if(sum+v[i]<=k){
            sum+=v[i];
        }
        else{
            ++b;
            sum=v[i];
        }
    }
    return b;
}

void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int l=0,h=n,ans=0;

    while(l<=h){
        int mid=l+(h-l)/2;
        if(ck(n,k,v,mid)<=m){
            ans=max(ans,n-mid);
            h=mid-1;
        }
        else l=mid+1;

    }
    cout<<ans<<'\n';

}

int main(){
    vogoban_vorsha();
    // int t;cin>>t; 
    // while(t--) 
    solve();
}