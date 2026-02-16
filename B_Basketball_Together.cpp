#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,d; cin>>n>>d;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.rbegin(),v.rend());

    int ans=0,sum=0;

    for(int i=0;i<n;i++){
        sum+=(d/v[i])+1;
        if(sum<=n) ans++;
        else break;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}
