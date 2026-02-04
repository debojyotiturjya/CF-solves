#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t; cin>>n>>t;
    string s; cin>>s;
    s=s.substr(0,n);
    int ss=s.size();

    for(int i=0;i<ss;i++) s[i]=toupper(s[i]);

    //cout<<s;

    while(t--){
        for(int j=0;j<ss;j++){
            if (s[j]=='B' && s[j+1]=='G') {
                swap(s[j],s[j+1]); j++;
        }
    }

}
    cout<<s<<'\n';
}

