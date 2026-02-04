#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n,m,h;
    cin >>n>>m>>h;
    
    vector<long long> v(n+1);
    for (int i=1;i<=n;i++) {
        cin>>v[i];
    }
    
    vector<long long>vv(n+1,0);
    vector<int>rst(n+1,0);
    int cnt=0;
    
    for (int op=1;op<=m;op++) {
        long long b,c; cin>>b>>c;
        
        if (rst[b]!=cnt) {
            vv[b]=0;
            rst[b]=cnt;
        }
        
        long long val=v[b]+vv[b]+c;
        if (val>h) cnt++;
         else vv[b]+=c;
    }
    
    for (int i=1;i<=n; i++) {
        if (rst[i]!=cnt){
            vv[i]=0;
        }
        cout<<v[i]+vv[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}