#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        int c = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i] == 2){
                c++;
            }
        }

        if(c%2 !=0){
            cout<<-1<<endl;
            continue;
        }
        if(c == 0){
            cout<<1<<endl;
            continue;
        }
        
        int c2= 0;
        int t =0;

        for(int i =0;i<n;i++){
            if(a[i] == 2){
                c2++;
                t = i+1;
            }

            if(c2==c/2){
                break;
            }

            
        }

        cout<<t<<endl;

        
    }
}