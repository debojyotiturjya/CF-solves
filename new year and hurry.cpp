#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    int c,co=0;

    int i=1;
    while(n--){
        c=i*5; co+=c; //cout<<co<<'\n';
        if(co+k>240) break; i++;
    }
    cout<<i-1<<'\n';

}

