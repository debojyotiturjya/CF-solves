#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n, k;


int bs(ll x, vector<ll> &v){
    int lo = 0, hi = n - 1;
    int ind = -1;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;

        if(v[mid] > x){
            hi = mid - 1;
        }
        else{
            ind = max(ind, mid);
            lo = mid + 1;
        }
    }
    return ind;
   
}

void solve(){
     cin >> n >> k;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    while(k--){
        ll x; cin >> x;
         cout << bs(x, v) + 1<< '\n';
    }
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
