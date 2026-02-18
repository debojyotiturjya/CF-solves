#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    long long a=0,b=0;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=n/i;b=n-a; 
            cout<<a<<' '<<b<<'\n';
            return;
        }
    }
    cout<<1<<' '<<n-1<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
