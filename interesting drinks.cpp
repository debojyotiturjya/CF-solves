#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());

    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        int low=0,high=n-1,mid,c;
        bool flag=false;
        while(low<=high){
            mid=(low+high)/2;
            if(v[mid]<=x){
                flag=true;
                //break
                c=mid;
                low=mid+1;
            }

            else high=mid-1;
        }
        if(flag) cout<<c<<'\n';
        else cout<<0<<'\n';
    }
}

