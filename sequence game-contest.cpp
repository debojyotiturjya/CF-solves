#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;

        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }
        int x; cin>>x;

        int mxv= *max_element(v.begin(),v.end()), mnv= *min_element(v.begin(),v.end());

        if(mxv>=x && mnv<=x) cout<<"YES\n";
        else cout<<"NO\n";

    }
}

