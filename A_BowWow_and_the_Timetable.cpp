#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    string s; cin>>s;
    int ans=(s.size()+1)/2;

    int c=0;
    for(int i=1;i<s.size();i++) if(s[i]=='1') c++;
    if(s.size()%2==1 &&c==0) ans--;

    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    solve();
}
