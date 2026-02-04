#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     while(t--){
        string a,b; cin>>a>>b;
        char c=a[0],d=b[0];

        a[0]=d; b[0]=c;

        cout<<a<<" "<<b<<'\n';

     }

}

