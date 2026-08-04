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
    vector<int> v(n+2);

    for(int i = 0; i < n + 2; i++) cin >> v[i];

    ll sum = 0; 
    for(int x : v) sum += x;

    for(int i = 0; i < v.size(); i++){
        int x = (sum - v[i]) / 2;
        
        if(x * 2 == (sum - v[i])){
            if(find(v.begin(), v.end(), x) != v.end()){
                int c = v[i];
                auto it = find(v.begin(), v.end(), x);
                int idx = -1;
                if (it != v.end()) {
                    idx = it - v.begin();
                }

                if(idx != i){
                    auto it = find(v.begin(), v.end(), x);
                    if(it != v.end())
                        v.erase(it);

                    it = find(v.begin(), v.end(), c);
                    if(it != v.end())
                        v.erase(it);

                    for(int x : v) cout << x << ' ';
                    cout << '\n';
                    return;
                }
            }
        }
        
    }

    cout << -1 << '\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}