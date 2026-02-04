#include<bits/stdc++.h>
using namespace std;


int main(){
    int y,w; cin>>y>>w;
    int d= 6-max(y,w)+1;

    if(d==0) cout<<"0/1"<<'\n';
    else if(d==3) cout<<"1/2"<<'\n';
    else if(d==6) cout<<"1/1\n";
    else if(d%2==0){
        cout<<d/2<<'/'<<6/2<<'\n';
    }
    else cout<<d<<'/'<<6<<'\n';
}


