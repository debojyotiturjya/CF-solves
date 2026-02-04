#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    string n; cin>>n;
    int ans=0;
    while(n.size()>1){
        long long sum=0;
        for(long long i=0;i<n.size();i++){
            sum+=n[i]-'0';
        }
        n=to_string(sum); ans++;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}
