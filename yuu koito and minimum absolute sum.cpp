#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++){
            int x; cin>>x;
            a.push_back(x);
        }

        long long ans=0;

        if (a[0]==-1 && a[n-1]==-1) {
            a[0]=0; a[n-1]=0;
            ans=0;
        }
        else if(a[0]==-1) {
            a[0]= a[n-1];
            ans=0;
        }
        else if (a[n-1] ==-1) {
            a[n-1] =a[0];
            ans=0;
        }
        else ans=abs(a[n-1]-a[0]);

        for (int i=1; i<n-1;i++) {
            if (a[i]==-1) a[i] = 0;
        }

        cout<<ans<<"\n";
        for (int i=0;i<n;i++) {
            cout <<a[i]<<' ';
        }
        cout<<'\n';
    }

    return 0;
}

