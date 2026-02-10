#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int cnt(vector<int>&v) {
    int cnt=0;
    for (int i=1;i<v.size();i++) {
        if (v[i]!=0 && v[i-1]==0)
            cnt++;
    }
    if (v.size() && v[0]!=0) cnt++;
    return cnt;
}

void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int c=0;

    c=cnt(v);
    
    if(c==0) cout<<0<<'\n';
    else if(c==1) cout<<1<<'\n';
    else cout<<2<<'\n';
     
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
