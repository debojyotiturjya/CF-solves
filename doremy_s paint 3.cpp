#include <bits/stdc++.h>
using namespace std;


int main(){
     int t; cin>>t;

     while(t--){
        int x; cin>>x;
        vector<int>v; map<int,int> freq;

        for(int i=0;i<x;i++){
            int c; cin>>c;
            freq[c]++;
        }


        if(freq.size()>2) cout<<"NO\n";
        else if(freq.size()==1) cout<<"YES\n";
        else{
            if(abs(freq.begin()->second - freq.rbegin()->second)<=1) cout<<"YES\n";
            else cout<<"NO\n";
        }
     }
}

