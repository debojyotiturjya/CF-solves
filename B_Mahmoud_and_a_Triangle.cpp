#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0; i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    bool ck=false;

    for(int i=1;i<n-1;i++){
        if(v[i-1]+v[i]>v[i+1]){
            ck=true; break;
        }
    }
    if(ck) cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
    vogoban_vorsha();
    solve();
}


