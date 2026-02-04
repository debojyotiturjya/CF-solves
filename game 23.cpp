#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;

    if(m%n!=0) cout<<-1<<'\n';
    else{
        int d=m/n;
        int c=0;

        while(d%2==0){
            d/=2; c++;
        }
        while(d%3==0){
            d/=3;c++;
        }
        if(d!=1) cout<<-1<<'\n';
        else cout<<c<<'\n';
    }
}


