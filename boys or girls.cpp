//boys or girls

#include<bits/stdc++.h>

using namespace std ;

int main(){
    string s; cin>>s; int n=s.length();
    vector<char>dc;

    for(int i=0;i<n;i++){
        bool found=false;
        for(int j=0;j<dc.size();j++){
            if(s[i]==dc[j]) found= true ;
        }
        if (found== false) dc.push_back(s[i]);
    }
    if(dc.size()%2==0) cout<<"CHAT WITH HER!\n";
    else if(dc.size()%2==1) cout<<"IGNORE HIM!\n";
}

