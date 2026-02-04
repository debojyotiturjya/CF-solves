#include<bits/stdc++.h>
using namespace std;

int main(){
    int f; cin>>f;
    string s; cin>>s; int n=s.length();
    vector<char>dc;

    for(int i=0;i<n;i++){
        bool found=false;
        for(int j=0;j<dc.size();j++){
            if(tolower(s[i])==dc[j]) found= true ;
        }
        if (found== false) dc.push_back(tolower(s[i]));
    }
    if(dc.size()==26) cout<<"YES\n";
    else  cout<<"NO\n";
}
