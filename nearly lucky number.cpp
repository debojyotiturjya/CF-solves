#include<bits/stdc++.h>

using namespace std ;

int main(){
    /*int n,c=0; cin>>n; vector<int> balti;

    while(n>0){
        balti.push_back(n%10);
        n=n/10;
    }
    int s=balti.size();
    for(int i=0;i<s;i++){
        if(balti[i]==4 ||balti[i]==7) c+=1;
        else break;
    }
    if(c==s) cout<<"YES\n";
    else cout<<"NO\n";*/

    string n; cin>>n;
    int l=n.size(),c=0;

    for (int i=0;i<l;i++){
        if(n[i]=='4' || n[i]=='7') c+=1;
    }


    if (c==4 || c==7) cout<<"YES\n";
    else cout<<"NO\n";
}

