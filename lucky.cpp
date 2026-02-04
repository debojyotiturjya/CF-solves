#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t; int co=0;

    while(t--){
        int a; cin>>a; vector<int>n;

        for(int i=0;i<6;i++){
            int q=a%10;
            n.push_back(q);
            a/=10;
        }
        //cout<<n.size();
        vector<int>r(n.begin(),n.begin()+3);vector<int>l(n.begin()+3,n.end());
        int ls=0,rs=0;

        for(int i=0;i<3;i++){
            ls+=l[i]; rs+=r[i];
        }
        if(ls==rs) cout<<"yes\n";
        else cout<<"no\n";
    }
}

