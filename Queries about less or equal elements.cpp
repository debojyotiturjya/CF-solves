#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    vector<int>ans;
    for(int i=0;i<m;i++){
        auto x=upper_bound(a.begin(),a.end(),b[i]);
        int ind=x-a.begin();

        ans.push_back(ind);
    }
    for(int s:ans) cout<<s<<' ';
}

