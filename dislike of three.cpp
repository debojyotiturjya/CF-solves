#include <bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     while(t--){
        int k;cin>>k;

        int i=0,n=1;
        while(i<k){
            if(n%3!=0 && n%10!=3) i++;
            n++;
        }
        cout<<n-1<<'\n';
     }
}

