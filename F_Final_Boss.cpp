#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll dmg(ll mid,int n,vector<ll>d,vector<ll>c){
    vector<int>v;
    ll tdmg=0;

    for(int i=0;i<n;i++){
        ll hit= 1+(mid-1)/c[i];
        tdmg+=d[i]*hit;
        if(tdmg>1e18) return tdmg;
    }

    return tdmg;
}

void solve(){
    int h,n; cin>>h>>n;

    vector<ll>d(n),c(n);

    for(int i=0;i<n;i++) cin>>d[i];
    for(int i=0;i<n;i++) cin>>c[i];

    ll l=1,r=4e10+1000;
    int ans=r;
    while(l<=r){
        ll mid=l+(r-l)/2;

        if(dmg(mid,n,d,c)>=h){
            //ans=mid;
            r=mid-1;
        }
        else l=mid+1;

    }

    cout<<l<<'\n';
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
