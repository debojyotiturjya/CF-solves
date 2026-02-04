#include <bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     while(t--){
        int a,b,m=INT_MAX; cin>>a>>b;

        for(int i=a;i<=b;i++){
            int c=i;
            if ((c-a)+(b-c)<m) m=(c-a)+(b-c);
        }
        cout<<m<<'\n';


     }
}

