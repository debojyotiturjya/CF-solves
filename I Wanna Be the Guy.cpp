#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    int p,q; vector<int>xp;
    cin>>p;
    while(p--){
        int i; cin>>i;
        xp.push_back(i);
    }
    cin>>q;
    while(q--){
        int i; cin>>i;
        xp.push_back(i);
    }
    /*cout<<xp.size();

    for(int i=0;i<xp.size();i++){
        cout<<xp[i]<<' ';
    }*/
    sort(xp.begin(),xp.end());
    xp.erase(unique(xp.begin(),xp.end()),xp.end());
    /*for(int j:xp){
        cout<<j<<' ';
    }*/
    int s= (t*(t+1))/2; //cout<<s;
    int ss=0;
    for(int k:xp){
        ss+=k;
    }
    if (s==ss) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";

}

