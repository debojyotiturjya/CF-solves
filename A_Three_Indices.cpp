#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    //bool ck=false;
    int a=0,b=0,c=0;

    for(int i=1;i<n-1;i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            //a=i-1,b=i,c=i+1;
            cout<<"YES\n"<<i<<' '<<i+1<<' '<<i+2<<'\n';
            return; 
        }
    }
    cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
