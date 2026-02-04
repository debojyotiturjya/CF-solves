#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>c[i];

    vector<bool>ab(n,true),bc(n,true);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int ai=(j-i+n)%n;
            if(a[ai]>=b[j]){
                ab[i] = false;
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int bi=(j+i) % n;
            if(b[j]>=c[bi]){
                bc[i]=false;
                break;
            }
        }
    }

    long long ans = 0;
    for(int i=0;i<n;i++){
        if(!ab[i]) continue;
        for(int i=0;i<n;i++){
            if(bc[i]){
                ans += n;
            }
        }
    }

    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int j;cin>>j;
    while(j--){
        solve();
    }
}
