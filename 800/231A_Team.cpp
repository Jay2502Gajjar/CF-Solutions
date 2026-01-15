#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int p;
    int v;
    int t;
    int total = 0;
    
    for(int i=0;i<n;i++){
        cin>>p>>v>>t;
        

        if((p && v)||(p&&t)||(v&&t)){
            total = total+1;
        }
    }
    
    cout<<total;
    return 0;
}