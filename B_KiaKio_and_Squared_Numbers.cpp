#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int cycle[] = {4, 16, 37, 58, 89, 145, 42, 20};
vector<bool> tf(146, false);


int ck(ll x){
    int ind = 0;

    while(true){
        if(x == 1) return 8;                

        if(x < 146 && tf[x]){               
            for(int i = 0; i < 8; i++){
                if(x == cycle[i]){
                    return ((i - ind) % 8 + 8) % 8;
                }
            }
        }

        ll sum = 0;
        while(x > 0){
            int d = x % 10;
            sum += d * d;
            x /= 10;
        }
        x = sum;
        ind++;
    }
}



void solve(){
    int n; cin >> n;
    vector<ll> v(n);

    vector<int> c(9, 0);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++){
        int fk = ck(v[i]);
        c[fk]++;
        v[i] = c[fk] - 1;
    }

    ll ans = 0; 
    for(int i = 0; i < n; i++){
        ans += v[i];
    }
    cout << ans << '\n';

}

int main(){
    vogoban_vorsha();
    for(int i = 0; i < 8; i++) tf[cycle[i]] = true;

    int t; cin>>t; 
    while(t--) 
    solve();
}