#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a[4];
        int c = 0;
        for(int i =0;i<4;i++){
            cin>>a[i];
        }

        int f1 = max(a[0],a[1]);
        int f2 = max(a[2],a[3]);

        for(int i =0;i<4;i++){
            if(a[i] == f1 || a[i] == f2){
                continue;
            }
            else{
                if(a[i]>f1 || a[i]>f2){
                    c = 1;

                }
            }
        }
        
        if(c==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    

        
    }

    return 0;
}