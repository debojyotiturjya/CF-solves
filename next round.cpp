#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t,p,c=0; cin>>t>>p;
        int m[t];
        for (int i=0;i<t;i++){
            cin>>m[i];
        }
        for (int i=0;i<t;i++){
            if(m[i]>=m[p-1] && m[i]>0) c+=1;
        }

    cout<<c<<'\n';


}

