#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    vector<int>p;
    for(int i=0;i<t;i++){
        int c; cin>>c;
        p.push_back(c);
    }

    int co=0,ts=0,sum=0;

    for(int i=0;i<t;i++){
        sum+=p[i];
    }

    sort(p.rbegin(),p.rend());

    int i=0;
    while(!(ts>sum/2)){
        ts+=p[i];
        co++; i++;
    }
    cout<<co;
}

