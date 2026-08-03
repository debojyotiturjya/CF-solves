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

    for(int i=0;i<n;i++) cin>>v[i];

    if(n==2 && v[0]!=v[1]) cout<<max(v[0],v[1])<<' '<<min(v[0],v[1])<<'\n';
    else{
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n-2;i++){
            if(v[i]%v[i+1]!=v[i+2]){
                cout<<-1<<'\n';
                return;
            }
        }
        cout<<v[0]<<' '<<v[1]<<'\n';
    }
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
