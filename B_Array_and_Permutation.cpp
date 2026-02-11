#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n;
    cin >> n;
    vector<int> p(n+1), ind(n+1);
    for (int i=1;i<=n;i++) {
        cin>>p[i];
        ind[p[i]]=i;         
    }
    vector<int>a(n+1);
    for (int i=1;i<=n;i++) {
        cin>>a[i];
    }
    
    int pre=0;
    bool ck=true;
    for (int i=1; i<=n; i++) {
        int cur=ind[a[i]];
        if (cur<pre) {
            ck=false;
            break;
        }
        pre=cur;
    }
   
    if(ck) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}