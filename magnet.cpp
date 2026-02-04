#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,p,i=0,co=0;cin>>t;
    vector<int> m;
    while(t--){
        cin>>p;
        m.push_back(p);
    }
    int s=m.size();
    for(int i=0;i<s;i++){
        if((m[i+1]==10 && m[i]==10) || (m[i+1]==01 && m[i]==01)) continue;
        else co+=1;
    }
    cout<<co<<'\n';
}
