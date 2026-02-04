#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x; cin>>n>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int q; cin>>q; v.push_back(q);
    }


    int sum=0,ind=0;
    for(int i=0;i<x;i++){
            sum+=v[i];
        }
    int tmp=sum;
    for(int i=x;i<v.size();i++){
        sum=(sum-v[i-x])+v[i];

        if(sum<tmp){
            ind=i-x+1;
            tmp=sum;
            }
    }
    cout<<ind+1;
}



/*
int ind, sum=INT_MAX;
        for(int i=0;i<v.size()-x;i++){
            int tmp=0;
            for(int j=i;j<i+x;j++) tmp+= v[j];

            sum=min(sum,tmp);
            if(sum==tmp) ind=i;
        }
        cout<<ind+1<<'\n';
*/

