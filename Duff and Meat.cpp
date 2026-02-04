#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    long long ans=0;int mn=INT_MAX;
    for(int i=0;i<n;i++){
        int a,p;cin>>a>>p;
        mn= min(mn,p);
        ans+=mn*a;
    }
    cout<<ans;
}
int main(){
    vogoban_vorsha();
    solve();
}

