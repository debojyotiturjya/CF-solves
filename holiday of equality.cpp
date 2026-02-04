#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     vector<int>wf;

     for(int i=0;i<t;i++){
        int tk; cin>>tk;
        wf.push_back(tk);
     }
     sort(wf.begin(),wf.end());
     int sum=0;
     for(int i=0;i<t;i++){
        sum+= abs(wf[t-1]-wf[i]);
     }
     cout<<sum;
}

