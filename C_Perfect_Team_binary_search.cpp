#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int c,m,x; cin>>c>>m>>x;

    int l=0,r=c+m+x,mid,ans=0;

    while(l<=r){
        mid=(l+r)/2;

        if(c>=mid && m>=mid && (c+m+x)>=3*mid){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<'\n';
    //cout<<min(min(c,m),(c+m+x)/3)<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
