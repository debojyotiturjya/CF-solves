#include <bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     while(t--){
        vector<int>a,b;

        for(int i=0;i<4;i++){
            int p; cin>>p;
            a.push_back(p);
            b.push_back(p);
        }
        sort(b.begin(),b.end());

        int x=max(a[0],a[1]), y=max(a[2],a[3]);

        vector<int>d;

        d.push_back(b[2]);
        d.push_back(b[3]);
        d.push_back(x);
        d.push_back(y);

        sort(d.begin(),d.end());
        d.erase(unique(d.begin(),d.end()),d.end());

        int m=d.size();
        if(m==2) cout<<"YES\n";
        else cout<<"NO\n";




     }
}

