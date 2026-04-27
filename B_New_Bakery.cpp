#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define elif else if
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
ll n,a,b;

ll profit(ll mid){
    ll x=n-mid;
    ll s=(mid*(mid+1))/2;
    ll ppft=(mid*b)+mid-s,rpft =a*x;
    return ppft+rpft;
}

void solve(){
    cin >>n>>a>>b;

    ll l=0,h=min(n,b);
    while(h-l>2){
        ll m1=l+(h-l)/3;
        ll m2=h-(h-l)/3;
        if(profit(m1)<profit(m2))
            l=m1+1;
        else
            h=m2-1;
    }

    ll pft=0;
    for(ll mid=l;mid<=h;mid++)
        pft= max(pft,profit(mid));

    cout <<pft<<'\n';
}

int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--)
    solve();
}