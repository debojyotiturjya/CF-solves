#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<string>v;
        for(int i=0;i<n;i++){
            string s;cin>>s;
            v.push_back(s);
        }

        int cumdumpster=0,x=0,y=0;
        for(int i=0;i<n;i++){
            int co=0;
            for(int j=0;j<m;j++){
                if(v[i][j]=='#') co++;
            }
            if(co>cumdumpster){
                cumdumpster=co; x=i+1;
            }
        }
        cout<<x<<' ';
        for(int i=0;i<n;i++){
            int co=0;
            for(int j=0;j<m;j++){
                if(v[i][j]=='#') co++;
                if(co==1) {y=j+1; break;}
            }
        }
        cout<<y<<'\n';
    }
}


