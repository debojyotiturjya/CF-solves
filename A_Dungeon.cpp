#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int a,b,c; cin>>a>>b>>c;

    if((a+b+c)%9!=0) cout<<"NO\n";
    else{
        if(min({a,b,c})>=(a+b+c)/9) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
