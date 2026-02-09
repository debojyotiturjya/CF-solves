#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    long long n,w;
        cin >>n>>w;

        if (w==1) cout<<0<<'\n';
        else {
            long long fb=n/w;
            long long rem=n%w;

            long long ans=fb*(w-1)+rem;
            cout<<ans<<'\n';
        }
    }

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
