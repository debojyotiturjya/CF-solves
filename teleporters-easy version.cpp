#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,c; cin>>n>>c;
        vector<int>v;

        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x+i+1);
        }
        sort(v.begin(),v.end());
        int sum=0,cnt=0;
        for(int i=0;i<n;i++){
            if(sum+v[i]>c) break;
            sum+=v[i];
            cnt++;
        }
        cout<<cnt<<'\n';

    }
}
