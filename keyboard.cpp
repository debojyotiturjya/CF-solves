#include<bits/stdc++.h>
using namespace std;


int main(){
    char c; cin>>c;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string rtd; cin>>rtd;
    string nrtd="";
    if(c=='R'){
        for(int i=0;i<rtd.size();i++){
            for(int j=0;j<s.size();j++){
                if(rtd[i]==s[j])nrtd+=s[j-1];
            }
        }
    }
    if(c=='L'){
        for(int i=0;i<rtd.size();i++){
            for(int j=0;j<s.size();j++){
                if(rtd[i]==s[j])nrtd+=s[j+1];
            }
        }
    }
    cout<<nrtd<<'\n';


}


