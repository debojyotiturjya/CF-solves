#include <bits/stdc++.h>
using namespace std;

int main(){
     int t;cin>>t;

     while(t--){
        int n,l; cin>>n; l=n;

        int c=0;
        while(l>0){
            l/=10;
            c++;
        }
        //cout<<c;


     int m,d=0; vector<int>v;

     for(int i=0;i<c;i++){
        m=n%10;
        //n=n-c;
        n=n/10;

        d= m* pow(10,i);

        if(d!=0) v.push_back(d);
     }

     cout<<v.size()<<'\n';

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<'\n';

     }

}

