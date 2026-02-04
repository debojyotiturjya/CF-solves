#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c; cin>>a>>b>>c;
    string x=a+b; //cout<<x;

    int m= x.length(), n=c.length(),co=0; //cout<<m<<n;

    vector<char>p;vector<char>q;

    if (m!=n) cout<<"NO\n";
    else{
        for(int i=0;i<m;i++){
            p.push_back(x[i]);
        }
        for(int i=0;i<n;i++){
            q.push_back(c[i]);
        }
        sort(p.begin(),p.end()); sort(q.begin(),q.end());

        for(int i=0;i<n;i++){
            if(p[i]==q[i]) co+=1;
        }

        if(co!=m) cout<<"NO\n";
        else cout<<"YES\n";

    }


}

