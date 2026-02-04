#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int ans=1; long long sum=v[0];
    for(int i=1;i<n;i++){
        if(sum<=v[i]){
            ans++; sum+=v[i];
        }
        else continue;
    }
    cout<<ans<<'\n';

}


