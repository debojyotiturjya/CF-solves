#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> q; int t,l,co=0,i=0; cin>>t;

    while(t--){
        cin>>l;
        q.push_back(l);
        i++;
    }
    int s= q.size();
    for(int i=0;i<s;i++){
        if(q[i]==1) co++;
    }
    if(co>0) cout<<"HARD\n";
    else cout<<"EASY\n";

}

