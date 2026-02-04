#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t; cin>>s>>t;
    int n=s.size();
    int d=0;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]) d++;
    }

    if (d%2==1) cout<<"impossible\n";
    else{
        string p="";
        bool ck=true;

        for(int i=0;i<n;i++){
            if(s[i]==t[i]){
                if(s[i]=='0') p+='1';
                else p+='0';
            }
            else{
                if(ck){
                    p+=s[i];
                    ck= !(ck);
                }
                else{
                    p+=t[i];
                    ck= !(ck);
                }
            }
        }
        cout<<p<<'\n';
    }
}


