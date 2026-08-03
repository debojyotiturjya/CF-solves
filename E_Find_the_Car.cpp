//1971E
//unsolved
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,k,q; cin>>n>>k>>q;

    vector<ll>p(k),t(k);

    for(int i=0;i<k;i++) cin>>p[i];
    for(int i=0;i<k;i++) cin>>t[i];

    while(q--){
        int x; cin>>x;
        int idx=lower_bound(p.begin(),p.end(),x)-p.begin();
        // cout<<idx<<' ';
        // cout<<'\n';
        double s=double(p[idx+1]-p[idx])/double(t[idx+1]-t[idx]);
        
        double as=t[idx]+double(x-p[idx])*s;
        cout<<as<<' ';
    }
    cout<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
