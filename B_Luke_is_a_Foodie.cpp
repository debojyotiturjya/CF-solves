#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n, x; cin >> n >> x;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    int l = v[0] - x, h = v[0] + x;

    for(int i = 1; i < n; i++){
        int lll = v[i] - x, hh = v[i] + x;
        l = max(l, lll); h = min(h, hh);

        if(l > h){
            ans++;
            l = lll; h = hh;
        }
    }

    cout << ans << '\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
