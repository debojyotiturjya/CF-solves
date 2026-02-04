#include<bits/stdc++.h>
using namespace std;

int main(){
     string s; cin>>s;
     string ss="hello"; int j=0;

     for(int i=0;i<s.size();i++){
        if(s[i]==ss[j]) j++;
     }
     if (j==5) cout<<"YES\n";
     else cout<<"NO\n";


}

