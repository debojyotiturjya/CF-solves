#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t,a=0,d=0; string s; cin>>t;
    cin>>s;
    for(int i=0;i<t;i++){
        s[i]= toupper(s[i]);
    }
    //cout<<s;
    for(int i=0;i<t;i++){
       if (s[i]=='A') a++;
       else if (s[i]=='D') d++;
    }
    if(a>d) cout<<"Anton\n";
    else if(d>a) cout<<"Danik\n";
    else cout<<"Friendship\n";
}

