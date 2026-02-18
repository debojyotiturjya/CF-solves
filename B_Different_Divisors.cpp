#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
vector<ll>p;
void prime(){
    for(int i=2;i<1e5;i++){
        bool ok=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                ok=false; break;
            }
        }
        if(ok) p.push_back(i);
    }                        
}
void solve(){             
    int d; cin>>d;
    ll x=0,y=0;

    for(int i=0;i<p.size();i++){
        if(p[i]>=d+1){
            x=p[i]; break;
        }
    }

    for(int i=0;i<p.size();i++){
        if(p[i]>=x+d){
            y=p[i]; break;
        }
    }
    ll ans=min(1LL*x*x*x,1LL*x*y);
    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    prime();
    int t; cin>>t; while(t--) solve();
}
