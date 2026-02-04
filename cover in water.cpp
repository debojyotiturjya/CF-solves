#include <bits/stdc++.h>
using namespace std;


int main(){
     int t; cin>>t;

     while(t--){
        int x; cin>>x;
        vector<char>v;

        for(int i=0;i<x;i++){
            char c; cin>>c;
            v.push_back(c);
        }
        int c=0;
        for(int i=0;i<x;i++){
            if(v[i]=='.' && i+1<x&& v[i+1]=='.' && i+2<x && v[i+2]=='.'){
                c=2; break;
            }
            if(v[i]=='.') c++;
        }
        cout<<c<<'\n';
     }
}


