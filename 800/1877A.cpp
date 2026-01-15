#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n-1];

        for(int i =0;i<n-1;i++){
            cin>>a[i];
        }

        int ns = 0;
        int ps= 0;

        for(int i =0;i<n-1;i++){
            if(a[i]<0){
                ns += a[i];
            }
            else{
                ps += a[i];
            }
        }

        cout<<(-1)*(ns+ps)<<endl;
        
    }

    return 0;
}