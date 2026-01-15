#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;

    if(n%2 ==0){
        for(long long i =1;i<n-1;i=i+2){
            if(k == 1){
                cout<<i;
                return false;
            }
            k = k-1;
        }
        for(long long j =2;j<n;j = j+2){
            if(k == 1){
                cout<<j;
                return false;
            }
            k = k-1;
        }
    }
    else{
        for(long long i =1;i<n;i=i+2){
            if(k == 1){
                cout<<i;
                return false;
            }
            k = k-1;
        }
        for(long long j =2;j<n-1;j = j+2){
            if(k == 1){
                cout<<j;
                return false;
            }
            k = k-1;
        }

    }



    return 0;
}