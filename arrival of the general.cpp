#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    vector<int>gen;

    for (int i=0;i<t;i++){
        int m; cin>>m;
        gen.push_back(m);
    }
    int max=INT_MIN,mxind;
    int min=INT_MAX,mnind;

    for(int i=0;i<t;i++){
        if(max<gen[i]){
            max=gen[i];
            mxind=i;
        }
    }

    for(int i=0;i<t;i++){
        if(min>=gen[i]){
            min=gen[i];
            mnind=i;
        }
    }

    int c=mxind+(t-1-mnind);

    if (mxind>mnind) c-=1;

    cout<<c<<'\n';
}

