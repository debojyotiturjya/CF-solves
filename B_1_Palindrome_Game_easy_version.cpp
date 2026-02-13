#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') c++;
    }

    if(c%2==0 || c==1) cout<<"BOB\n";
    else cout<<"ALICE\n";

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
