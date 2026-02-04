#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>vb(n); for(int i=0;i<n;i++) cin>>vb[i]; sort(vb.begin(),vb.end());
    int m; cin>>m;
    vector<int>vg(m); for(int i=0;i<m;i++) cin>>vg[i]; sort(vg.begin(),vg.end());

    int ans=0; bool stop=false;
    for(int i=0,j=0;i<n &&j<m;){
        if(abs(vb[i]-vg[j])<=1){
            ans++;i++;j++;
        }
        else if(vb[i]<vg[j]) i++;
        else j++;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}

