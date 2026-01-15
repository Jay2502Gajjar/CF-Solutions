#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    unordered_map<char,int> mp;

    string s = "codeforces";

    for(int i =0;i<s.size();i++){
        mp[s[i]]++;
    }

    while(t--){
        char a;
        cin>>a;

        if(mp[a]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}