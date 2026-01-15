#include <bits/stdc++.h>
using namespace std;

int main(){
    int m[5][5];
    int r;
    int c;

    for(int i =0;i<5;i++){
        for(int j =0;j<5;j++){
            cin>>m[i][j];
            if(m[i][j] == 1){
                r = i;
                c = j;
            }
        }
        cout<<endl;
    }

    int ans = abs(2-r) + abs(2-c);
    cout<<ans;
    

    return 0;
}