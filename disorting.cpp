#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,c,b,co=0,d; cin>>n; vector<int>a;

        for(int i=0;i<n;i++){
            int x;cin>>x; a.push_back(x);
        }
        int mn=INT_MAX; bool f=true;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                f=false; break;
            }
            else{
                d=abs(a[i]-a[i+1]);
                if(d==min(mn,d)){
                    mn=d;
                    c=a[i];
                    b=a[i+1];
                }
            }
        }
        if(!f) cout<<0<<'\n';
        else{
            cout<<mn/2+1<<'\n';
        }
    }

}

