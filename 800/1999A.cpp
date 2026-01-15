#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int s = 0;
        while(n>0){
            s += n%10;
            n = n/10;
        }

        cout<<s<<endl;
    }

    return 0;
}