#include <bits/stdc++.h>
using namespace std;

int main(){
    int k; cin>>k; vector<int>v;
    for(int i=0;i<12;i++){
        int x; cin>>x; v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    int sum=0,c=0;

    for(int i=0;i<12;i++){
        sum+=v[i];
        if(sum<k) c++;
        else break;
    }
    if(k==0) cout<<0<<'\n';
    else if(sum<k) cout<<-1<<'\n';
    else cout<<c+1<<'\n';
}

