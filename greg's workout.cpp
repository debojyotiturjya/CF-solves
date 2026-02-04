#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int c=0,b=0,bk=0;

    for(int i=0;i<n;i++){
        if(i%3==0) c+=v[i];
        if(i%3==1) b+=v[i];
        if(i%3==2) bk+=v[i];
    }
    int mx=max({c,b,bk});
    if(mx==c) cout<<"chest\n";
    if(mx==b) cout<<"biceps\n";
    if(mx==bk) cout<<"back\n";
}

