#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,m; cin>>n>>m;

    vector<string>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int>vm(m);
    for(int i=0;i<m;i++) cin>>vm[i];

    int ans=0;

    for(int i=0;i<m;i++){
        vector<int>vc(5);
        for(int j=0;j<n;j++){
            vc[v[j][i]-'A']++;
        }
        sort(vc.rbegin(),vc.rend());
        ans+=vc[0]*vm[i];
    }

    cout<<ans<<'\n';
    
}
int main(){
    vogoban_vorsha();
    solve();
}
