#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

    
    int c= 0;

    for(int i =0;i<v.size();i++){
        if(v[i]>n){
            break;
        }

        if(n == v[i]){
            c= 1;
            break;
        }
        else if(n%v[i] == 0){
            c = 1;
            break;
        }
    }

    
    if(c == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}