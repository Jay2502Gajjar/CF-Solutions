#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;

    int l =0;
    int c=0;

    for(int i =0;i<s.size();i++){
        if(isupper(s[i])){
            c++;
        }
    }

    if(c == s.size()){
        for(int i =0;i<s.size();i++){
            s[i] = tolower(s[i]);
        }
        cout<<s;
    }
    else{

    for(int i =0;i<s.size();i++){
        if(islower(s[i]) && i!=0){
            l++;
        }
    }

    if(l>0){
        cout<<s;
    }
    else{
        for(int i =0;i<s.size();i++){
            if(i == 0){
                s[i] = toupper(s[i]);
            }
            else{
                s[i] = tolower(s[i]);
            }
        }
    cout<<s;

    }
    }
   

    return 0;
}