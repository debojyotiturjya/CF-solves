#include<bits/stdc++.h>

using namespace std ;

int main(){
    string w;cin>>w; int l=w.length(),uc=0,lc=0;

    for (int i=0;i<l;i++){
        if (w[i]>='A' && w[i]<='Z') uc++;
        else if (w[i]>='a' && w[i]<='z') lc++;

    }
    if(uc<lc){
        for(int i=0;i<l;i++){
            w[i]=tolower(w[i]);
        }
    }
    else if(uc>lc){
        for(int i=0;i<l;i++){
            w[i]=toupper(w[i]);
        }
    }
    else{
        for(int i=0;i<l;i++){
            w[i]=tolower(w[i]);
        }
    }
    cout<<w<<'\n';

}

