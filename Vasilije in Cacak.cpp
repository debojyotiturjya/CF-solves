#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        long long n,k,x; cin>>n>>k>>x;
        long long mn=(k*(k+1))/2,mx=((n*(n+1))-((n-k)*(n-k+1)))/2;

        if(mx>=x && x>=mn) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

