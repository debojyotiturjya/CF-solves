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
    vector<int> a(n), b(n);

    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;

    vector<int> va(2 * n + 1, 0), vb(2* n + 1, 0);

    int c = 1;

    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]) c++;
        else{
            va[a[i - 1]] = max (c, va[a[i - 1]]);
            c = 1;
        }
    }
    va[a[n - 1]] = max (c, va[a[n - 1]]); 
    
    c = 1;
    for(int i = 1; i < n; i++){
        if(b[i] == b[i-1]) c++;
        else{
            vb[b[i - 1]] = max (c, vb[b[i - 1]]);
            c = 1;
        }
    }
    vb[b[n - 1]] = max (c, vb[b[n - 1]]); 
    c = 1;

    int ans = 1;
    for(int i = 0; i < 2 * n + 1; i++){
        int dhong = va[i] + vb[i];
        ans = max(ans, dhong);
    }
    

    //for(int i = 0; i < 2*n + 1; i++) cerr << va[i] << ' '<< vb[i] << '\n';
    cout << ans << '\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
