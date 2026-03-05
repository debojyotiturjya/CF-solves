#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    ll n,k; cin>>n>>k;

    ll l=0,r=n,ans=0;

    while(l<=r){
        ll mid=l+(r-l)/2;

        if(mid*(mid+1)/2>=k){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    string s(n,'a');

    ll fb=n-ans-1,sb=n-(k-(ans*(ans-1)/2));

    s[fb]='b'; s[sb]='b';

    cout<<s<<'\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
