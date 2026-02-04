#include<bits/stdc++.h>
using namespace std;

int main(){
    int g,r,dco=0; cin>>g>>r;

    while(true){
        g--; r--;
        dco++;
        if(g==0||r==0) break;
    }
    int sco=(g+r)/2;
    cout<<dco<<' '<<sco;
}

