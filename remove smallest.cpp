#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     while(t--){
        int s;cin>>s;
        vector<int> v;

        for(int i=0;i<s;i++){
            int x;cin>>x; v.push_back(x);
        }
        sort(v.begin(),v.end());

        int c=0;
        for(int i=0;i<s-1;i++){
            if(v[i+1]-v[i]>1) {c=1; break;}
        }
        if(c==0) cout<<"YES\n";
        else cout<<"NO\n";


     }
}
