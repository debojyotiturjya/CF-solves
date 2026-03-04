#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int a,b; cin>>a>>b;

    cout<<min({a,b,(a+b)/3})<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
        solve();
}
