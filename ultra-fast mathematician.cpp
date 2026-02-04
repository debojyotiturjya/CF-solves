#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b; cin>>a>>b; vector<int> d;
    int s=a.size(); //cout<<s;
    for (int i=0;i<s;i++){
        if(a[i]==b[i]) cout<<0;
        else if(a[i]!=b[i]) cout<<1;
    }


}

