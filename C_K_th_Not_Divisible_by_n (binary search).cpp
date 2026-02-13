#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,k; cin>>n>>k;

    int l=1,r=2e9+501,ans=0;

    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid-(mid/n)>=k) {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}

/*
binary search on answer

eikhane mainly dekha hoise je amr total undivisible shongkha koto. Jodi ta k er chaite beshi hoy taile definitely er
moddhe ase naile r nai. ez hishab.

total undivisible number= x-(x/n);
x=range, n=joto dia vag ditesi.
*/