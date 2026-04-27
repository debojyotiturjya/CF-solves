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

    vector<int>p(k),t(k);

    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) cin>>t[i];

    vector<double>tn(n);

    for(int i=1;i<n;i++){
        tn[i]=(p[i]-p[i-1])/(t[i]-t[i-1])*1.0;
    }

    for(int x:tn) cout<<x<<' ';

    while(q--){
        int d; cin>>d;
        auto ind= lower_bound(p.begin(),p.end(),d)-p[0];
        double ans=tn[ind+1];
    }
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
