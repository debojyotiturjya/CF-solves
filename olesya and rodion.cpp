#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k; cin>>n>>k;

    string s="";
    if(n==1 && k/10>0) cout<<-1<<'\n';
    else if(k==10){
        int x=n-2;

        s+=to_string(k); //cout<<s;

        for(int i=0;i<x;i++) s+='0';
        cout<<s;
    }
    else {
        int x=n-1;

        s+=to_string(k); //cout<<s;

        for(int i=0;i<x;i++) s+='0';
        cout<<s;
    }
}



