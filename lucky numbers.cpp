#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n; //unsigned long long ans=(2*(pow(2,n)-1)); cout<<ans<<'\n';
    unsigned long long x=1;
    for(int i=1;i<=n;i++){
        x*=2;
    }
    cout<<2*x-2<<'\n';
}


