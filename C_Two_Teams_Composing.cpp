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
    map<int,int>m;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        m[x]++;
    }
    int mx=0;
    for(auto x:m){
        if(x.second>=mx) mx=x.second;
    }
    
   int d=m.size();
   int ans=min(d,mx);

   if(mx>=d){
        if(mx==d) d--;
        ans=min(d,mx);
   }

   cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
