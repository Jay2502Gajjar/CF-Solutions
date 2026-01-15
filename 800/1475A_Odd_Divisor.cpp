#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t>0){
        long long n;
        cin>>n;

        if((n & (n - 1))== 0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }

        t--;
        cout<<endl;
    }
    return 0;
}