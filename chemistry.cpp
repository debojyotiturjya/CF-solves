#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }

        int c=0;
        for(auto i:m){
            if(i.second%2 !=0) c++;
        }
        if(c-1<=k) cout<<"YES\n";
        else cout<<"NO\n";

    }

}


