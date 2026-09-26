#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int t; cin >> t;

    vector<vector<int>> allfather;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        allfather.pb({v[0], v[1]});
    }

    vector<int> f_ele;
    vector<pair<int, int>> sc_ele;

    ll ans = 0;

    for(int i = 0; i < t; i++){
        f_ele.pb(allfather[i][0]);
        sc_ele.pb({allfather[i][1], i});
    }
    sort(sc_ele.begin(), sc_ele.end());
    ans += f_ele[sc_ele[0].second];
    for(int i = 1; i < t ; i++){
        ans += sc_ele[i].first;
    }

    int x = f_ele[sc_ele[0].second]; 
    sort(f_ele.begin(), f_ele.end());
    if(x != f_ele[0]) ans += f_ele[0] - x; 
    
    
    //cerr << x << ' ' <<f_ele[0]<<' '<<f_ele[sc_ele[0].second]<<'\n';

    cout<< 1LL* ans << '\n';

    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
