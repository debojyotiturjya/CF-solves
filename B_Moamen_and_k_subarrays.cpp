#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n, k; cin>>n>>k;
    vector<pair<int,int>>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    int c=1;

    for(int i=0;i<n-1;i++){
        if(v[i].second+1 != v[i+1].second) c++;
    }

    if(c>k) cout<<"No\n";
    else cout<<"Yes\n";
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
