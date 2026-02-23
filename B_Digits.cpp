#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,d; cin>>n>>d;

    vector<int>ans;
    ans.pb(1);

    if(n>=3 || d%3==0) ans.pb(3);
    if(d==5) ans.pb(5);
    if(n>=3 || d==7) ans.pb(7);
    if(n>=6 || d%9==0 ||(n>=3 && d%3==0)) ans.pb(9);

    for(int x:ans) cout<<x<<" ";
    cout<<'\n';

}

int main(){
    vogoban_vorsha();
    int t;cin>>t; while(t--) solve();
}