#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; string s; cin>>s;

    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') c0++;
        if(s[i]=='1') c1++;
    }
    cout<<n-2*min(c0,c1)<<'\n';
}

