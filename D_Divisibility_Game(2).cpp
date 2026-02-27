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

    vector<int>a(n),b(m);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    vector<int>ac(n+m+1,0),bc(n+m+1,0);
    
    for(int i=0;i<a.size();i++) ac[a[i]]++;

    vector<int>u=a;
    sort(u.begin(),u.end());
    u.erase(unique(u.begin(),u.end()),u.end());

    

    for(auto x : u){
        for(int j=x; j<n+m+1; j+=x){
            bc[j] += ac[x];
        }
    }

    int aw=0,bw=0,d=0;

    for(int i;i<m;i++){
        if(bc[b[i]]==n) aw++;
        else if(bc[b[i]]==0) bw++;
        else d++;
    }

    if(aw+(d%2)>bw) cout<<"Alice\n";
    else cout<<"Bob\n";


}

int main(){
    vogoban_vorsha();
    int t;cin>>t; 
    while(t--) 
    solve();
}
