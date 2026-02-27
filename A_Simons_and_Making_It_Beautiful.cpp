#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    int ind=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==n) ind=i;
    }
    if(ind!=0) swap(v[0],v[ind]);
    for(int i=0; i<n; i++)cout<<v[i]<<" ";
    cout<<'\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}