#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; vector<int>n;
    cin>>a; n.push_back(a);
    cin>>b; n.push_back(b);
    cin>>c; n.push_back(c);

    sort(n.begin(),n.end());

    cout<<abs(n[1]-n[0])+abs(n[2]-n[1]);
}

