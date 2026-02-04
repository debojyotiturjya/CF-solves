#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<char>l,r; set<char>sl,sr;
        for(int i=0;i<n-1;i++){
            sl.insert(s[i]);
            l.push_back(sl.size());
        }
        for(int i=n-1;i>=1;i--){
            sr.insert(s[i]);
            r.push_back(sr.size());
        }
        reverse(r.begin(),r.end());

        int ans=0;
        for(int i=0;i<n-1;i++){
            int temp=l[i]+r[i];
            ans=max(ans,temp);
        }
        cout<<ans<<'\n';
    }
}


