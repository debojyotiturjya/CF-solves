#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; ll h,k; cin>>n>>h>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    ll sum=0;
    for(int i=0;i<n;i++) sum+=v[i];

    vector<ll>pre(n+1,0);
    for(int i=0;i<n;i++) pre[i+1]=pre[i]+v[i];

    vector<ll>mn(n+1),mx(n+2,-1);
    for(int i=1;i<=n;i++){
        if(i==1) mn[i]=v[0];
        else mn[i]= min(mn[i-1],v[i-1]);
    }
        

    for(int i=n;i>=1;i--){
        if(i==n) mx[i]=v[n-1];
        else mx[i]=max(mx[i+1],v[i-1]);
    }
        

    ll ans=LLONG_MAX;

    for(int i=0;i<=n-1;i++){
        ll best=pre[i];
        if(i>0 && i<n){
            ll g=mx[i+1]-mn[i];
            if(g>0)best+=g;
        }

        ll nd=h-best,f,st,r,t;
        
        if(nd>0) f=(nd+sum-1)/sum;
        else f=0;
       
        st=f*n+i;

        if(st>0) r=(st-1)/n;
        else r=0;
        
        t=st+r*k;

        ans=min(ans,t);
    }

    cout<<ans<<"\n";
}

int main(){
    vogoban_vorsha();
    int t;cin>>t; while(t--)solve();
}