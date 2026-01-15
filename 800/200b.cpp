#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float a[n];
    float s = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        s += a[i];
    }

    float ans = s/n;
    
    cout<<ans;

    

    
    return 0;
}