#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int ans=0;
    int l=0,r=n-1;
    ll sl=v[0],sr=v[n-1];

    while(l<r){
        if(sl==sr){
            ans=max(ans,l+1+n-r);
        }
        if(sl<=sr){
            l++;
            sl+=v[l];
            
        }
        else{
            r--;
            sr+=v[r];
           
        }
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
