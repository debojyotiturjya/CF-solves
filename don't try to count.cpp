#include <bits/stdc++.h>
using namespace std;


int main(){
     int t; cin>>t;

     while(t--){
        int n,m; cin>>n>>m;
        string x,s; cin>>x>>s; bool flag=false; int c=0;
        for(int i=0;i<6;i++){
            if(x.find(s)!=string::npos){
                flag=true; break;
            }
            x+=x; c++;

        }
        if(flag) cout<<c<<'\n';
        else cout<<-1<<'\n';

     }
}


