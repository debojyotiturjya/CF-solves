#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n, p; cin >> n >> p;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<pair<int, int>> pair(n);

    for(int i = 0; i < n; i++){
        pair[i].first = b[i];
        pair[i].second = a[i];
    }

    sort(pair.begin(), pair.end());

    for(int i = 0; i < n - 1; i++){
        if(pair[i].first == pair[i + 1].first && pair[i].second < pair[i + 1].second)
                                            swap(pair[i], pair[i + 1]);
    }

    // for(int i=0; i<n; i++){
    //     cerr<<'('<<pair[i].first<<", "<<pair[i].second<<')'<<'\n';
    // } 

    if(n == 1){
        cout << p << '\n';
        return;
    }
    if(pair[0].first > p){
        cout << 1ll* n * p << '\n';
        return;
    }

    unsigned ll ans = p; int x = n - 1;

    for(int i = 0; i < n; i++){
        if(x >= pair[i].second){
            if(pair[i].first > p){
                ans += 1ll * p * pair[i].second;
            }
            else ans += 1ll * pair[i].first * pair[i].second;
            x -= pair[i].second;
            //cerr << ans << ' ';
        }
        else if(x < pair[i].second){
            if(pair[i].first > p){
                ans += 1ll * p * x;
            }
            else ans += 1ll * pair[i].first * x;
            cout << ans << '\n';
            //cerr << ans << ' ';
            return;
        }
        
    }

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
