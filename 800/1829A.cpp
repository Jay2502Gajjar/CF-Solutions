#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string s1 = "codeforces";

        int c = 0;

        for(int i =0;i<s.size();i++){
            if(s1[i] != s[i]){
                c++;
            }
        }


        cout<<c<<endl;
    }
}