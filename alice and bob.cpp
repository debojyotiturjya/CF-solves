#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,a; cin>>n>>a;
        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        int bl=0,br=0;
        for(int x:v){
            if(x>a) br++;
            else if(x<a) bl++;
        }

        if(br>bl) cout<<a+1<<'\n';
        else if(br<bl) cout<<a-1<<'\n';
        else cout<<a+1<<'\n';

    }
}

