#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    int a[5] = {1,5,10,20,100};

    int i =4;
    int c = 0;

    while(i>=0){
        if(a[i]>n){
            i--;
        }
        else{
            n = n-a[i];
            c++;
        }
    }
    cout<<c;
    return 0;
}