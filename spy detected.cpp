#include <bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     while(t--){
        vector<int>num;
        int n; cin>>n;

        for(int i=0;i<n;i++){
            int x; cin>>x; num.push_back(x);
        }

        int co=0,index;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(num[i]==num[j]) co++;
            }
            if(co==1) index=i;
            else co=0;
        }
        cout<<index+1<<'\n';
     }
}

