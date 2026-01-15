#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t>0){

        int n;
        cin>>n;
        int sum = 0;

        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
            sum = sum+a[i];
        }
      

        if(sum == n){
            cout<<0;
        }
        else if(sum<n){
            cout<<1;
        }
        else if(sum>n){
            cout<<sum-n;
        }
        
        cout<<endl;
        

        t = t-1;
    }

    return 0;
}