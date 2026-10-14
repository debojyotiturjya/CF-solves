#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n, k;


bool bs(ll x, vector<ll> &v){
    int lo = 0, hi = n;
    

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == x){
            return true;
        }
        else if(v[mid] > x){
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    return false;
}

void solve(){
     cin >> n >> k;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    while(k--){
        ll x; cin >> x;
        if(bs(x, v)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
