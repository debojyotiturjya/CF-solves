//PETYA AND STRINGS

#include<bits/stdc++.h>

using namespace std ;

int main(){
    string a,b;int co=0; cin>>a>>b;
    int l= a.length();

    for(int i=0;i<l;i++){
        a[i]= tolower(a[i]);
        b[i]= tolower(b[i]);
    }
    if(a==b) cout<<"0"<<'\n';
    else if (a>b) cout<<"1"<<'\n';
    else cout<<"-1"<<'\n';


}

