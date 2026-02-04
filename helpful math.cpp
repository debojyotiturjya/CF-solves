#include<bits/stdc++.h>

using namespace std ;

int main(){
    string a; cin>>a;
    int l=a.length();

    for(int i=0; i<l-1;i+=2){
      for(int j=0;j<l-i-1;j+=2){
         if(a[j]>a[j+2]) swap(a[j],a[j+2]);
    }
    }
    cout<<a<<'\n';



}

