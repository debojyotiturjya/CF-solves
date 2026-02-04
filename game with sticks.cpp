#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,c=0; cin>>n>>m;

    while(true){
        c++;n--;m--;
        if(n==0 || m==0) break;
    }
    if(c%2==0) cout<<"Malvika"<<'\n';
    else cout<<"Akshat\n";

}

