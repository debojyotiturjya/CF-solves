#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,t; cin>>n;t=n;
    int sum=0;
    while(t--){
        int x; cin>>x;sum+=x;
    }  int ans=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1) ans++;
    }
    cout<<ans;
}
int main(){
    vogoban_vorsha();
    solve();
}

