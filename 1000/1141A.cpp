#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    cin>>n>>m;

    if(m%n != 0){
        cout<<-1;

        return 0;
    }

    int r = m/n;
    int c = 0;

    while(r>1){
        if(r%2 == 0){
            r/=2;

        } 
        else if(r%3 == 0){
            r /= 3;
        } 
        else{
            cout<<-1;
            return 0;
        }
        c++;
    }

    cout<<c;
    return 0;
}
