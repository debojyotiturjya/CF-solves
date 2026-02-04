#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        long long ho;
        if(n%2==0) ho=n-1;
        else ho=n;
        long long hos=k*(ho-k+1),mos=pow(k,2);

        if(n%2==0 && k%2==0 && mos<=n && hos>=n) cout<<"YES\n";
        else if(n%2==1 && k%2==1 && mos<=n && hos>=n) cout<<"YES\n";
        else cout<<"NO\n";

    }
}

