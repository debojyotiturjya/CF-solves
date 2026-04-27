#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int x; cin>>x;

    int s=0,i=0;
    while(x>s){
        i++;
        s+=i;
    }
    if(s==x) cout<<i<<'\n';
    else if(s-x==1) cout<<i+1<<'\n';
    else cout<<i<<'\n';
   
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
