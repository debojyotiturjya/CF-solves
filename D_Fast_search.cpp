#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int k; cin >> k;
    while(k--){
        int l, r; cin >> l >> r;
        int ans = upper_bound(v.begin(), v.end(), r) - v.begin() - (lower_bound(v.begin(), v.end(), l) - v.begin());

        cout << ans << " ";
    }
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
