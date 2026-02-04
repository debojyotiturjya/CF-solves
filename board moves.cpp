#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        //int nn=sqrt(n);
        long long l=(n-1)/2;
        long long ans=0;

        for(int i=0;i<=l;i++){
            ans+=1LL*i*i*8;
        }
        cout<<ans<<'\n';
    }
}
