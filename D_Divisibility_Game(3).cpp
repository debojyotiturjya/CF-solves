#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,m; cin>>n>>m;
    
    vector<int>a(n),b(m),ac(n+m+1),bc(n+m+1);
    set<int>u;

    for(int i=0;i<n;i++) cin>>a[i],ac[a[i]]++, u.insert(a[i]);
    for(int i=0;i<m;i++) cin>>b[i];

    for(auto x:u){
        for(int i=x;i<n+m+1;i+=x) bc[i]+=ac[x];
    }

    int aw=0,bw=0,d=0;

    for(auto i:b){
        if(bc[i]==0) bw++;
        else if(bc[i]==n) aw++;
        else d++;
    }

    if((aw+(d%2))>bw) cout<<"Alice\n";
    else cout<<"Bob\n";
}

int main(){
    vogoban_vorsha();
    int t;cin>>t; 
    while(t--) 
    solve();
}