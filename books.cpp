#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,t; cin>>n>>t;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x; v.push_back(x);
    }

    int m=0,j=0,sum=0,c=0;

    for(int i=0;i<n;i++){
        sum+=v[i]; c++;
        while(sum>t){
            sum-=v[j];
            j++;c--;
        }
        m=max(m,c);
    }
    cout<<m<<'\n';
}


