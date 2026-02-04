
#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;
     int a,b,c,suma=0,sumb=0,sumc=0;
     while(t--){
           cin>>a>>b>>c;
           suma+=a;sumb+=b;sumc+=c;


     }
     if((suma==0) &&(sumb==0) &&(sumc==0)) cout<<"YES\n";
     else cout<<"NO\n";
}
