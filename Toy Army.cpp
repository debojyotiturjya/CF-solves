#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    if(n==1) cout<<1;
    else cout<<n+(n/2);
}
int main(){
    vogoban_vorsha();
    solve();
}

