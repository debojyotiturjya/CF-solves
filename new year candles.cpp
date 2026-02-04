#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b; cin>>a>>b;
    int c=a;
    while(a>=b){

        a-=b; a++; c++;

    }
    //if(a>0) c+=a;
    cout<<c<<'\n';
}


