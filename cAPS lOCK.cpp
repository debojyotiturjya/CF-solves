#include<bits/stdc++.h>
using namespace std;

bool check2(string s){
    bool aup=true;

    for(int i=0;i<s.size();i++){
        if(!isupper(s[i])) aup=false;
    }
    return aup;
}

bool check(string s){
    bool up=true;

    if(islower(s[0])){
        for(int i=1;i<s.size();i++){
            if(!isupper(s[i])) up=false;
        }
    }
    else up=false;

    return up;

}

int main(){
     string s; cin>>s;

     if (check2(s)){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s;
     }
     else{
        if(check(s)){
            for (int i=0;i<s.size();i++){
                s[i]=tolower(s[i]);
            }

            s[0]=toupper(s[0]);

            cout<<s;
        }
        else{
            cout<<s;
        }
        }
}


