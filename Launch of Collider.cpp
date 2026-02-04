#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long ans=LLONG_MAX;

    for(int i=0;i<n-1;i++){
        if(s[i]=='R'&& s[i+1]=='R' ||s[i]=='L'&&s[i+1]=='L'||s[i]=='L'&&s[i+1]=='R') continue;
        else{
            long long col=(v[i+1]-v[i])/2;
            ans=min(ans,col);
        }
    }
    if(ans==LLONG_MAX) cout<<-1<<'\n';
    else cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}

