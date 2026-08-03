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
    vector<int> v(n);

    for(int i = 0;i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
   //for(int i =0; i < n; i++) cout<< v[i] << ' ';

    int m = v[0]; 
    int ans = 0;

    for(int i = 1; i < n; i++){
        if(m >= v[i]){
            ans += m + 1 - v[i];
            v[i] = m + 1 ;
        }
        m=v[i];
    }
    cout<<ans<<'\n';

}

int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
