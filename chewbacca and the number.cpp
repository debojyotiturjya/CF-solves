#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n;cin>>n;

    string s;
    while(n>0){
        int x,y,ss;
        x=n%10; n/=10; y=9-x;
        ss=min(x,y); //string z= to
        s+=to_string(ss);
    }
    reverse(s.begin(),s.end());

    if(s[0]=='0') s[0]='9';
    cout<<s<<'\n';
}


