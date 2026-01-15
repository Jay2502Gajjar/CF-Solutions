#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int diff = n;
    int num = 5;
    int total =0;

    while(diff>0){
        if(diff>=num){
            total = total+1;
            diff = diff-num;
            continue;
        }
        else if(diff<num){
            num = diff;
            diff = diff-num;
            total =total+1;
        }

    }

    cout<<total;
    return 0;
}