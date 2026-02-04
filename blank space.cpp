#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     while(t--){
        int n;cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int c=0; vector<int>cc;
        for(int i=0;i<n;i++){
            if(a[i]==0) {
                c++;
                cc.push_back(c);
            }
            else c=0;
        }
        if(cc.size()==0) cout<<0<<'\n';
        else{
            sort(cc.begin(),cc.end());
            int x=cc.size()-1;
            cout<<cc[x]<<'\n';
        }

     }

}

