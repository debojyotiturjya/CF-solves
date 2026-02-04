#include<bits/stdc++.h>
using namespace std;


int main(){
    int m,n; cin>>m>>n;
    vector<int>v;

    for(int i=0;i<m;i++){
        int x; cin>>x;
        if(x<0) v.push_back(abs(x));
    }
    sort(v.rbegin(),v.rend());
    int c=0;
    if(v.size()<n){
        for(int i=0;i<v.size();i++){
            c+=v[i];
        }
    }
    else{
        for(int i=0;i<n;i++){
            c+=v[i];
        }
    }
    cout<<c<<'\n';
}

