#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
long long pow(int x,int k){
    long long pow=1;
    for(int i=0;i<k;i++){
        pow*=2;
    }
    return x*pow;
}

void solve(){
    int k,x; cin>>k>>x;
    long long ans=pow(x,k)*1LL;
    cout<<ans<<'\n';
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--)solve();
}
