#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     int c,m,cc=0,cm=0;
     while(t--){
        cin>>c>>m;

        if (c>m) cc++;
        if (m>c) cm++;
     }

     if(cc>cm) cout<<"Mishka\n";
     if(cm>cc) cout<<"Chris\n";
     if(cm==cc) cout<<"Friendship is magic!^^\n";

}

