#include <bits/stdc++.h>
using namespace std;

bool nprime(int f){
    int c=0;
    if(f<=1) return false;
    for(int i=2;i<=f/2;i++){
        if(f%i==0) c++;
    }
    return (c==0);
}

int main(){
     int n,fc,sc;cin>>n;

     for(int i=2;i*2<n;i++){
        fc=i*2; sc=n-fc;
        if(!nprime(sc)) break;
     }

     cout<<fc<<" "<<sc;


}

