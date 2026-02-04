#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;
     vector<int>cp;

     for(int i=0;i<t;i++){
        int x;cin>>x;
        cp.push_back(x);
     }
     int mx=cp[0],mn=cp[0],c=0;

     for(int i=0;i<t;i++){
        if(cp[i]>mx){
            mx=cp[i]; c++;
        }
        if(cp[i]<mn){
            mn=cp[i]; c++;
        }

     }
     cout<<c;



}

