#include <bits/stdc++.h>
using namespace std;


int main(){
     int t; cin>>t;

     for(int i=0;i<t;i++){
        int c=0,x; cin>>x;
        for(int i=0;i<x-1;i++){
            int d; cin>>d;
            c+=d;
        }
        cout<<-1*c<<'\n';

     }
}



