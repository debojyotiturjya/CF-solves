#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     vector<int>v,p,q,r;

     for(int i=0;i<t;i++){
        int x;cin>>x;
        v.push_back(x);
     }
     int a=0,b=0,c=0;

     for(int i=0;i<t;i++){
        if(v[i]==1){a++; p.push_back(i+1);}
        if(v[i]==2){b++; q.push_back(i+1);}
        if(v[i]==3){c++; r.push_back(i+1);}
     }
     cout<<min(a,min(b,c))<<'\n';

     for(int i=0;i<min(a,min(b,c));i++){
        cout<<p[i]<<" "<<q[i]<<" "<<r[i];
        cout<<'\n';
     }
}


