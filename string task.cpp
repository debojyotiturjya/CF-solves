#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);

    vector<char>c;
    for(int i=0;i<s.size();i++){
        c.push_back(s[i]);
    }

    for(int i=0;i<c.size();i++){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'||s[i]=='y') continue;
        else cout<<'.'<<s[i];
    }

}
