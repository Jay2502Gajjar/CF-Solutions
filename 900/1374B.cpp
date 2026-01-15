#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int c2=0; 
        int c3 =0;

        while(n%2 == 0){
            n/=2;
            c2++;
        }

        while(n%3 == 0){
            n/= 3;
            c3++;
        }

        if(n!= 1 ||c2>c3){
            cout<<-1<<endl;
        } 
        else{
            cout<<2*c3-c2<<endl;
        }
    }

    return 0;
}
