#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];        
        }

        int no = 0;
        int po = 0;

        for(int i =0;i<n;i++){
            if(a[i] == 1){
                po++;
            }
            else{
                no++;
            }
        }

        if(po<no){
            int c  =0;
            while(po<no){
                po++;
                no--;
                c++;
            }

            if(no%2 == 0){
                cout<<c<<endl;
            }
            else{
                cout<<c+1<<endl;
            }
        }
        else if(po>=no){
            if(no%2 == 0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        

    }
    return 0;
}