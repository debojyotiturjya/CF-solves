#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int mx=1;

    if(n==1) cout<<mx<<'\n';
    else{
        int c=1;
        for(int i=0;i<n-1;i++){
            if(v[i+1]>v[i]) c++;
            else{
                mx=max(mx,c);
                c=1;
            }
        }
        mx=max(c,mx);
        cout<<mx<<'\n';

    }

}
