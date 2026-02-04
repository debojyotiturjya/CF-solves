#include <bits/stdc++.h>
using namespace std;

int main(){
     int a,b,c,d; cin>>a>>b>>c>>d;
     string s; cin>>s;

     int j=0;
     for(int i=0;i<s.size();i++){
        if(s[i]=='1') j+=a;
        if(s[i]=='2') j+=b;
        if(s[i]=='3') j+=c;
        if(s[i]=='4') j+=d;
     }
     cout<<j<<'\n';

}

