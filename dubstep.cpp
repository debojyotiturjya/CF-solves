#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;

    string sb="WUB";

    int ind=s.find(sb);

    while(ind!= string::npos){
        s.replace(ind,sb.size()," ");
        ind=s.find(sb,ind+1);
    }
    cout<<s<<'\n';
}

