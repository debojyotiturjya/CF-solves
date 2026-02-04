#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,k;cin>>n>>k;
    long long tot=0;
    while(n--){
        int x,y;cin>>x>>y;
        tot+=y-x+1;
    }
    if(tot%k==0) cout<<0<<'\n';
    else{
        long long ans=k*((tot/k)+1)-tot;
        cout<<ans<<'\n';
    }

}
int main(){
    vogoban_vorsha();
    solve();
}

