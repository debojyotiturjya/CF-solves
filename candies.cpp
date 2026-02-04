#include<bits/stdc++.h>
using namespace std;

long long powr(int n){
    long long p=1;
    for(int i=1;i<=n;i++){
        p*=2;
    }
    return p;
}

int main(){
    int t;cin>>t;

    while(t--){
        long long n,k=-1;cin>>n;
        for(int i=2;i<=30;i++){
            if(n% (powr(i)-1)==0){
                k=n/ (powr(i)-1); break;
            }
        }
        cout<<k<<'\n';
    }

}


