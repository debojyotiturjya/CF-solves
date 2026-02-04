#include <bits/stdc++.h>
using namespace std;


int main(){
     int n,m,a,b; cin>>n>>m>>a>>b;
     int c=n*a, cc=c,ca=n,cb=0;
     bool flag= true;

     while(ca>0){
        ca-=m; cb++;
        //int d= ca+(cb*m);
        //if(ca<0) flag= false;
        int caa=ca*a,cbb=cb*b;
        if(ca<0) caa=0;

        cc= caa+cbb;
        if(cc>0) c= min(c,cc);

     }
     cout<<c;
}


