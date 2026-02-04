#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int l,a,b;
    cin >>l>>a>>b;

    int ans=0;

    for(int i=1;i<=l;i++){
        int bongoboltu=(a+i*b)%l;
        ans=max(ans,bongoboltu);
    }

    cout<<ans<<'\n';
}

int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--){
        solve();
    }
}

