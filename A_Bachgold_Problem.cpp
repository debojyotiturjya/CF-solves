#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; cin>>n;
    
    cout<<n/2<<'\n';
    if(n%2==0) for(int i=0;i<n/2;i++) cout<<2<<' ';
    else{
        for(int i=0;i<n/2-1;i++) cout<<2<<' ';
        cout<<3;
    }
}

int main(){
    vogoban_vorsha();
    solve();
}