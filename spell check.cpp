#include <bits/stdc++.h>
using namespace std;

int main(){
     vector<char>ch={'T','i','m','u','r'};

     int t;cin>>t;

     while(t--){
        int n;cin>>n; vector<char>v;
        string s; cin>>s;

        for(int i=0;i<n;i++){
            v.push_back(s[i]);
        }

        sort(ch.begin(),ch.end());
        sort(v.begin(),v.end());

        int c=0;
        if(n!=ch.size()) cout<<"no\n";
        else{
            for(int i=0;i<n;i++){
                if(ch[i]==v[i]) c++;
            }
            if(c==n)cout<<"yes\n";
            else cout<<"no\n";
        }
     }

}

