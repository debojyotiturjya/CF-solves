#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    long long n; cin>>n;
    long long mn=1,mx=1;

    if(n%2==1 ||n<4) {cout<<-1<<'\n'; return;}
    mx=n/4;
    if(n%6==0) mn=n/6;
    else mn=n/6 +1;
    cout<<mn<<' '<<mx<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
