#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        int c=1,cur=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]) cur=1 ;
            else cur++;
            c=max(cur,c);

        }
        cout<<c+1<<'\n';

    }
}


