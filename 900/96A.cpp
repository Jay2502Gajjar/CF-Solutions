#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int d = 0;
    int c = 1;
    
    for(int i =1;i<s.size();i++){
        char prev = s[i-1];
        char cur = s[i];
        

        if(prev == cur){
            c++;
        }
        else{
            c = 1;
        }

        if(c ==7){
            d= 1;
            break;
        }
    }

    if(d==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}