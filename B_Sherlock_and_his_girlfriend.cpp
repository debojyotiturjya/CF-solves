#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
vector<bool>seive(100005+100,true);

void pck(){
    seive[0]=false,seive[1]=false;
    for(int i=2;i<=100005;i++){
        if(!seive[i]) continue;
        for(int j=i+i;j<=100005;j+=i){
            seive[j]=false;
        }
    }
    
}

void solve(){
    int n; cin>>n;
    
    if(n<3) cout<<1<<'\n';
    else cout<<2<<'\n';

    for(int i=2;i<=n+1;i++){
        if(seive[i]) cout<<1<<' ';
        else cout<<2<<' ';
    }
    cout<<'\n'; 
}
int main(){
    vogoban_vorsha();
    pck();
    solve();
}