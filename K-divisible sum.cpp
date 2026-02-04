#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;

        if(n==1) cout<<k<<'\n';
        else if(k==1) cout<<k<<'\n';
        else if(n==k) cout<<1<<'\n';
        else{
            long long msm=((n+k-1)/k)*k; //ceiling value, manually done cz ceil function cant handle values over 10^8 maybe
            long long ans=(msm/n);
            if(msm%n!=0) cout<<ans+1<<'\n';
            else cout<<ans<<'\n';

        }
    }
}
