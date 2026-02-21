#include <bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; string s; cin>>n>> s;
    
    int c=1;
    for (int i=1;i<n;i++) {
        if (s[i]!=s[i-1]) c++;
    }
    
    if (s[0]==s[n-1]) cout<<c<<"\n";
    else cout<<min(n,c+1)<<"\n";
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
    
}


