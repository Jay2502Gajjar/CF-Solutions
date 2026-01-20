#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;

    string s;
    cin>>s;

    unordered_map<char,int> mp;

    for(int i = 0;i<s.size();i++){
        mp[s[i]]++;
    }

    string a = "";

    for(auto &x : mp){
        if(x.second%k != 0){
            cout<<-1<<endl;
            return 0;
        }

        int t = x.second/k;
        while(t--){
            a += x.first;
        }
    }

    string ans = "";
    while(k--){
        ans += a;
    }

    cout<<ans<<endl;
    return 0;
}
