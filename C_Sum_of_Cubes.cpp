#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    long long x; cin>>x;

    bool ck=false;
    for(int i=1;i<=1e4+501;i++){
        int l=1,r=1e4,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            long long a=1LL*i*i*i,b=1LL*mid*mid*mid;

            if(a+b==x){
                ck=true;cout<<"YES\n"; return;
            }
            else if(a+b>x) r=mid-1;
            else l=mid+1;
        }
    }
    cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
