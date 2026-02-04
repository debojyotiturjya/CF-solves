#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t; vector<int>v,ve,vo;

     while(t--){
        int x; cin>>x;
        v.push_back(x);
     }

     int even=0,odd=0;

     for(int i=0;i<v.size();i++){
        if(v[i]%2==0) even++;
        else odd++;
     }

     if(even>odd){
        for(int i=0;i<v.size();i++){
            if(v[i]%2!=0) ve.push_back(i);
        }
        for(int c:ve){
            cout<<c;
        }
     }

     if(even<odd){
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0) vo.push_back(i);
        }
        for(int c:vo){
            cout<<c+1;
        }
     }


}


