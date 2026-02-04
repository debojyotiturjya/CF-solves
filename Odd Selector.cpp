#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,x; cin>>n>>x;
    vector<int>v(n);

    int o=0,e=0;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        if(v[i]%2==1)o++;
        else e++;
    }
    if (o==0) cout<<"No\n";
    else if (o%2==0 && x==n) cout<<"No\n";
    else if (e==0 && x%2==0) cout<<"No\n";
    else cout<<"Yes\n";

}
int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--){
        solve();
    }
}

