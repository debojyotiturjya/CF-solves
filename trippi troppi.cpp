#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t; cin.ignore();

    while(t--){
        string s; getline(cin,s);
        int co=0;

        cout<<s[0];

        for(int i=0;i<s.length();i++){
            if (s[i]==' ') co+=1;

            if(co>0){ cout<<s[i+1]; co=0;}
        }
        cout<<'\n';

    }
}

