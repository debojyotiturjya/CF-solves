#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin>>y;

    while(true) {
        y+= 1;
        int ny= y;
        vector<int>by;
        bool found= false;


        while (ny>0) {
            by.push_back(ny%10);
            ny/=10;
        }


        for (int i=0; i<4;i++) {
            for (int j= 0;j< 4;j++) {
                if (i!=j && by[i]==by[j]) {
                    found= true;
                }
            }
        }

        if (!found) {
            cout<<y<<'\n';
            break;
        }

    }
}

