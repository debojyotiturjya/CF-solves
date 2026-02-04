#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1,s2,s3,s4,c=0; cin>>s1>>s2>>s3>>s4; int s[4]={s1,s2,s3,s4};

    sort(s,s+4);

    for(int i=0;i<4;i++){
        if(s[i+1]==s[i]) c+=1;
    }
    cout<<c<<'\n';

}

