#include<bits/stdc++.h>
using namespace std;

int main(){
    int p,b,i=1; cin>>p>>b;

    while(true){
        if((i*p)%10==0||(i*p)%10==b) break;
        i++;
    }
    cout<<i<<'\n';

}

