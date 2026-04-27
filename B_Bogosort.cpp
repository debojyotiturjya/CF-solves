#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.rbegin(),v.rend());

    for(int x:v) cout<<x<<' ';
    cout<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
