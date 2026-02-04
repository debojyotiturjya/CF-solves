#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;vector<int>st;
    while(n--){int x;cin>>x;st.push_back(x);}
    int u=0,d=0,t=0,c=0,tx=0;
    for(int i=0;i<st.size();i++){
        if(st[i]==1)u++;
        if(st[i]==2)d++;
        if(st[i]==3)t++;
        if(st[i]==4)c++;
    }
    tx+=c;
    int m=min(u,t);
    tx+=m;u-=m;t-=m;
    tx+=t;
    tx+=d/2;d%=2;
    if(d==1){
        if(u>=2){
           tx++;
           u-=2;
          }
        else{
          tx++;
          u-=0;
        }
    }
    if(u>0)tx+=(u+3)/4;
    cout<<tx;
}

