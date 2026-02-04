#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     while(t--){
        string s,ss; cin>>s; ss=s;

        if(ss=="abc"){
            cout<<"YES\n";
            continue;
        }

        bool mtc=false;
        swap(ss[0],ss[1]); if(ss=="abc") mtc=true;
        ss=s;
        swap(ss[0],ss[2]); if(ss=="abc") mtc=true;
        ss=s;
        swap(ss[1],ss[2]); if(ss=="abc") mtc=true;

        if(mtc==true) cout<<"YES\n";
        else cout<<"NO\n";


     }

}

