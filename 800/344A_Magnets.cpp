#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int c = 0;
    
    while(n>1){
        int prev = m;
        cin>>m;

        if(prev != m && prev == 10 && m == 01 ){
            c= c+1;
        }
        else if(prev != m && prev == 01 && m == 10){
            c = c+1;
        }


        n--;
        
    }
    cout<<c+1;
    
    return 0;
}