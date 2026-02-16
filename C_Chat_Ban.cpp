#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

long long cnt(long long x){
    return 1LL*x*(x+1)/2;
}

void solve(){
    int k;long long x; cin>>k>>x;

    long long lo=1,hi=2*k-1,mid;
    long long tot=0; int ans=2*k-1;

    while(lo<=hi){
        mid=(lo+hi)/2;
        if(mid>=k){
            tot=cnt(k)+cnt(k-1)-cnt(2*k-1-mid);
        }
        else tot=cnt(mid);

        if(tot>=x){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;

    }
    cout<<ans<<'\n';
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
