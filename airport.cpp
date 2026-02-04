#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,m; cin>>n>>m;
    vector<int>v,vv;
    int tot=0,tmp=n;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        tot+=x;
        v.push_back(x); vv.push_back(x);
    }

    int minans=0,maxans=0;
    if(n>=tot){
        for(int i=0;i<m;i++){
            minans+=(v[i]*(v[i]+1))/2;
        }
        maxans=minans;
        cout<<maxans<<' '<<minans<<'\n';
    }
    else{
        while(tmp>0){
            sort(v.begin(),v.end());
            if(tmp>=v[0]){
                minans+=(v[0]*(v[0]+1))/2;
                tmp-=v[0];
                v.erase(v.begin());
            }
            else{
                int l=v[0]-tmp,lans=(l*(l+1))/2;
                int pans=(v[0]*(v[0]+1))/2;;
                minans+=(pans-lans);
                tmp-=tmp;
            }

        }

        int i=0;

        while(n>0){
            sort(vv.rbegin(),vv.rend());
            int lem=vv.size();
            int j=i%lem;
            if(vv[0]<=0) continue;
            maxans+=vv[0];
            vv[0]--;
            n--;
        }
        cout<<maxans<<' '<<minans<<'\n';
    }
}
int main(){
    vogoban_vorsha();
    solve();
}

