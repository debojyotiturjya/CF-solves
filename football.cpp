#include<bits/stdc++.h>
using namespace std;

int main(){
     string s; cin>>s;

     int i=0,c=0,cc=0,d=0,e=0,j=0; vector<int>v,vv;

     while(i<s.size()){
        if(s[i]=='0') {
            c++;
        }
        else{
            d=c;
            c=0;
            v.push_back(d);
        }
        i++;
     }
     if(c>0) v.push_back(c);
     while(j<s.size()){
        if(s[j]=='1') {
            cc++;
        }
        else{
            e=cc;
            cc=0;
            vv.push_back(e);
        }
        j++;
     }
     if(cc>0) v.push_back(cc);
     sort(v.begin(),v.end());
     sort(vv.begin(),vv.end());

     if(v[(v.size())-1]>=7 ||vv[(vv.size())-1]>=7) cout<<"YES\n";
     else cout<<"NO\n";

}

