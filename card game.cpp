#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        vector<int>a,b;
        int a1,a2; cin>>a1>>a2; //a.push_back(a1);a.push_back(a2);
        int b1,b2; cin>>b1>>b2; //b.push_back(b1); b.push_back(b2);

        int c=0;
        int snc=0;

        if(a1>b1&& a2>=b2) c+=2;
        else if(a1>=b1 && a2>b2) c+=2;

        if (a2>b1 &&a1>=b2) c+=2;
        else if (a2>=b1 &&a1>b2) c+=2;

        cout<<c<<'\n';




    }
}

