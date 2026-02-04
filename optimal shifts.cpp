
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        int d=0,co=0;
        for(int i=0;i<2*n;i++){
            int ind=i%n;
            if(s[ind]!='1') co++;
            else{
                d=max(co,d);
                co=0;
            }
        }
        cout<<d<<'\n';
    }
}
