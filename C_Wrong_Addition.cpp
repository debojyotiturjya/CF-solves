#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll a,s;cin>>a>>s;
    string ans="";
    while(s){
        ll da=a%10, ds=s%10;
        if(da<=ds) ans+=to_string(ds-da);
        else{
            s/=10;
            ds+=10*(s%10);
            if(da<ds && ds>=10 &&ds <=19) ans+=to_string(ds-da);
            else{
                cout<<-1<<'\n';return;
            }
        }
        a/=10;s/=10;
    }
    if(a){
        cout<<-1<<'\n';
        return;
    }
    
    reverse(ans.begin(),ans.end());
    while(ans.size()>1&&ans[0]=='0') ans.erase(0,1);
    
    cout<<ans<<'\n';
}

int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--) solve();
}