#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    if((k * b) > s){
        cout << -1 << '\n';
        return;
    }

    if(s > ((k * b)+(n * (k - 1)))){
        cout << -1 << '\n';
        return;
    }

    vector<ll> v(n, 0);
    v[0] += k * b;
    s -= k * b;

    for(int i = 0; i < n && s >= 0; i++){
        if(s >= (k - 1)){
            v[i] += k - 1;
            s -= k - 1; 
        }
        else {
            v[i] += s;
            s -= s;

        }
    }

    sort(v.begin(), v.end());


    for(ll x: v) cout << x << ' ';
    cout << '\n';
}

int main(){
    vogoban_vorsha();
    int t;
    cin >> t;

    while(t--)
        solve();
}
