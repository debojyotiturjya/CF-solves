#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int r,x,d,n; cin>>r>>x>>d>>n;
        string s; cin>>s;
        map<char,int>fq;

        for(int i=0;i<n;i++){
            fq[s[i]]++;
            }

        if(fq.size()==1 && fq.begin()->first=='2' && r==x) cout<<0<<'\n';

        else{
            int c=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    c++; r-=d;
                    if(r<0) r=0;
                }
                if(s[i]=='2'){
                    if(r<x){
                        c++;
                        r+=d;
                    }
                }
            }
            cout<<c<<'\n';
        }
        }
    }


