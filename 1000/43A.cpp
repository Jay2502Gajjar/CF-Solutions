#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int> mp;

    while(n--){
        string s;
        cin>>s;

        mp[s]++;
    }
    int m = 0;
    string ans;

    for(auto &x:mp){
        m = max(x.second,m);
    }

    for(auto &a:mp){
        if(a.second == m){
            cout<<a.first;
        }
    }

    return 0;
}