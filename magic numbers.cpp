#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;

    bool ck=true;
    int i=0;
    while(i<s.size()){
        if(s[i]!='1'){
            ck=false; break;
        }
        if(i+2<=s.size() && s[i+1]=='4' && s[i+2]=='4'){
            ck=true; i+=3;
        }
        else if(i+1<=s.size() && s[i+1]=='4' ){
            ck=true; i+=2;
        }
        else{
            ck=true; i++;
        }
    }
    if(ck) cout<<"YES\n";
    else cout<<"NO\n";

}


