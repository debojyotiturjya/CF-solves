#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c; cin>>n>>a>>b>>c;
    vector<int>v={a,b,c};
    sort(v.begin(), v.end());
    int mn =v[0],md=v[1],mx=v[2];

    if(mn==1) cout<<n;

    else{
        int temp= n,co=0,d=0,mxc=0;
        for(int i=0;i<=n/md;i++){
            for(int j=0;j<=n/mn;j++){
                co=temp-(i*md+j*mn);
                if(co>=0 && co%mx==0){
                    mxc=co/mx; d=max(d,i+j+mxc);
                }



            }
        }
        cout<<d<<'\n';
    }


}

