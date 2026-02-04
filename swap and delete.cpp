#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int c0=0,c1=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0') c0++;
            else c1++;
        }
        int r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(c1!=0){
                    c1--;r++;
                }
                else break;
            }
            if(s[i]=='1'){
                if(c0!=0){
                    c0--;r++;
                }
                else break;
            }
        }
        cout<<s.size()-r<<'\n';


    }
}


