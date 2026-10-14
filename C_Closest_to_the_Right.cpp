#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n, k; cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    while(k--){
        int x; cin >> x;
        int ind = lower_bound(v.begin(), v.end(), x) - v.begin();

        cout << ind + 1 << '\n';
    }
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
