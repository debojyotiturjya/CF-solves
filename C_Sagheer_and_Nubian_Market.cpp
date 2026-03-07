#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,s; cin>>n>>s;
    vector<ll>v(n+1);

    for(int i=1;i<=n;i++) cin>>v[i];

    int l=1,r=n,mid;
    int ans=0,ansum=0;

    while(l<=r){
        int mid=l+(r-l)/2;
        vector<ll>tmp(n+1);
        for(int i=1;i<=n;i++) tmp[i]=v[i]+ 1LL*i*mid;
        sort(tmp.begin(),tmp.end());

        ll sum=0;
        for(int i=1;i<=mid;i++) sum+=tmp[i];

        if(sum<=s){
            ans=mid;
            ansum=sum;
            l=mid+1;
        }
        else r=mid-1;
       
    }
    
    cout<<ans<<' '<<ansum<<'\n';

}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
