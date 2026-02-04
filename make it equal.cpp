#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;
        vector<int>s,t;

        for(int i=0;i<n;i++){
            int x; cin>>x; s.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x; cin>>x; t.push_back(x);
        }

        for(int i=0;i<n;i++){
            s[i]%=k;
            s[i]=max(s[i], abs(k-s[i]));
        }
        for(int i=0;i<n;i++){
            t[i]%=k;
            t[i]=max(t[i], abs(k-t[i]));
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        bool ck=true;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                ck=false; break;
            }
        }
        if(ck) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
