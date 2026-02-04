#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);

    int len=s.length(); //cout<<len;
    vector<char> ch;

    for(int i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z'){
            ch.push_back(s[i]);
        }
    }
    //cout<<ch.size();
    sort(ch.begin(),ch.end());
    //for(int i=0;i<ch.size();i++) cout<<ch[i];
    ch.erase(unique(ch.begin(),ch.end()),ch.end());

    cout<<ch.size()<<'\n';

}

