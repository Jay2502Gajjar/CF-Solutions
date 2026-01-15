#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int uc=0;
    int lc = 0;
    for(int i =0;i<s.size();i++){
        if(isupper(s[i])){
            uc++;
        }
        else{
            lc++;
        }
    }

    if(uc>lc){
        for(int i =0;i<s.size();i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i =0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }

    }

    cout<<s;
    return 0;
}