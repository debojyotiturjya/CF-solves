#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x,c=0; cin>>n>>x;

    for(int i=1;i<=n;i++){
        if(x%i==0 && n*i>=x) c++;
    }
    cout<<c<<'\n';
}


