#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,c=0; cin>>t; vector<int>home; vector<int>away;

    while(t--){
        int h,a;
        cin>>h>>a;
        home.push_back(h);away.push_back(a);
    }

    for(int i=0;i<home.size();i++){
        for(int j=0;j<away.size();j++){
            if(home[i]==away[j]) c+=1;
        }
    }

    cout<<c<<'\n';

}

