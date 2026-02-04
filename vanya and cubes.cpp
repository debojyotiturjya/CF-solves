#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     int s=0,ss=0,c=0,i=1;

     while(ss<t){
        s+=i;
        ss+=s;
        if(ss>t) break;
        c++;
        i++;

     }
     cout<<c<<'\n';
}

