#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    vector<int>t(5),u(5);
    int p[5]={500, 1000, 1500, 2000,2500};
    int sh,uh;
    for(int i=0;i<5; i++) cin>>t[i];
    for(int i=0;i<5; i++) cin>>u[i];
    cin>>sh>>uh;

    int ans=0; ans+=sh*100; ans-=uh*50;

    for(int i=0;i<5;i++){
        int uns=p[i]*(3/10.0),dons=round((1-(t[i]/250.0))*p[i])-(50*u[i]);
        ans+=max(uns,dons);
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}
