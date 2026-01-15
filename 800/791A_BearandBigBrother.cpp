#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    cin>>a>>b;
    
    int c = 0;

    while(true){
        if(a>b){
            cout<<c;
            break;
        }
        else{
            a = a*3;
            b = b*2;
            c = c+1;
        }
    }
    return 0;
}