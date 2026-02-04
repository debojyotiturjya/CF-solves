#include <bits/stdc++.h>
using namespace std;

int main(){
     int n,k; cin>>n>>k;

     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     int c=0;
     for(int i=0;i<n;i++){
        if(5-arr[i]>=k) c++;
     }

     cout<<c/3;

}

