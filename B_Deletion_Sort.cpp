#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; 
    cin >> n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    bool ck=true;   

    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            ck=false;
            break;
        }
    }

    if(ck) cout<<n<<'\n';
    else cout<<1<<'\n';
}

int main(){
    vogoban_vorsha();
    int t; cin>>t;  while(t--) solve();
}