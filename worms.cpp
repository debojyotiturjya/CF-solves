#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    vector<int>a;int z=0;
    for(int i=0;i<n;i++){

        int x; cin>>x; z+=x;
        a.push_back(z);
    } //for(int x:a) cout<<x<<' ';
    int m; cin>>m;
    vector<int>b;
    for(int i=0;i<m;i++){
        int x; cin>>x;
        b.push_back(x);
    }

    for(int i=0;i<m;i++){
        int low=0,high=a.size()-1;


        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==b[i]){
                ans=mid; break;
            }
            else{
                if(a[mid]<b[i]){
                    if(mid==a.size()-1){
                        ans=mid; break;
                    }
                    else if(a[mid+1]>=b[i]){
                        ans=mid+1; break;
                    }
                    else{
                        low=mid+1;
                    }
                }
                else if(a[mid]>b[i]){
                    if(mid==0){
                        ans=mid; break;
                    }
                    else if (b[i]>a[mid-1]&& b[i]<=a[mid]) {
                        ans = mid;
                        break;
                    }
                    else{
                        high=mid-1;
                    }
                }

            }
        }
        cout<<ans+1<<'\n';
    }

}


