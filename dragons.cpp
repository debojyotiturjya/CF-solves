#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t; cin>>n>>t; vector<int>v;

    while(t--){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int minn=INT_MAX;

    if(n==v.size()){
        int s=abs(v[0]-v[v.size()-1]);
        minn=min(minn,s);
    }
    else{
        for(int i=0;i<v.size()-(n-1);i++){
            int s=abs(v[i]-v[i+(n-1)]);
            minn=min(minn,s);
        }
    }


    cout<<minn;
}

