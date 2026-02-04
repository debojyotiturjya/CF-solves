#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n,t; cin>>n>>t;

    for(int i=0;i<t;i++){
        if(n%10!=0) n=n-1;
        else n=n/10;
    }
    cout<<n<<'\n';
}

