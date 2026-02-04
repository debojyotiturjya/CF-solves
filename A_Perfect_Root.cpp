#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<' ';
    }
    cout<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
