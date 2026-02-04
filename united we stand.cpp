#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n;cin>>n; vector<int>v,b,c; set<int>s;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
            s.insert(x);
        }

        sort(v.begin(),v.end());



        if(s.size()==1) cout<<-1<<'\n';
        else{
            int minn=INT_MAX;
            for(int i=0;i<v.size();i++){

                if(v[i]==min(minn,v[i])){
                    minn=min(minn,v[i]);
                    b.push_back(v[i]);
                }
                else{
                    c.push_back(v[i]);
                }
            }
            cout<<b.size()<<" "<<c.size()<<'\n';
            for(int x:b)cout<<x<<" ";
            cout<<'\n';
            for(int x:c) cout<<x<<" ";
            cout<<'\n';

        }

    }
}
