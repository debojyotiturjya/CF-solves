#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n, k, q; cin >> n >> k >> q;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll ans = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        
        if(v[i] <= q){
            cnt++;
        }
        else{
            if(cnt >= k){
                ll d = cnt - k + 1;
                ans += (d * (d + 1)) / 2;
            }
            cnt = 0;
        }
        
    }

    if(cnt >= k){
        ll d = cnt - k + 1;
        ans += (d * (d + 1)) / 2;
    }

    cout << ans << '\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
