#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;

    while(n > 0){
        bool ok = true;

        if(i%3 == 0){
            ok = false;
        }

        int x = i;
        while(x>0){
            if(x%10 == 3){
                ok = false;
                break;
            }
            x /=10;
        }

        if(ok){
            n--;
        }

        i++;
    }
    cout<<i-1;


    return 0;
}