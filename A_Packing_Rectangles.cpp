#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int w, h, n; cin >> w >> h >> n;

    int lo = 0, hi = max((w * n), (h * n));
    int ans = 1e8;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        int ww = mid / w, hh = mid / h;

        if(ww * hh >= n){
            ans = min(mid, ans);
            hi = mid - 1;
        }
        else lo = mid + 1;
    }

    cout << ans << '\n';
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
