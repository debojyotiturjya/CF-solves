#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b; cin>>a>>b;
    vector<int>bd;
    int l=a.size();int ll=b.size();
    int n=max(l,ll);


    while(n--){
        int x= a[n]-'0',y=b[n]-'0';
        int j=x+y; int k=j%2;
        bd.push_back(k);
    }
    int z= bd.size();
    //cout<<z;

    for(int i=z-1;i>=0;i--){
        cout<<bd[i];
    }


}

