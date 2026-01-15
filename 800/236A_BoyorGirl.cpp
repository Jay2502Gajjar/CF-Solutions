#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>>s;
    int total=0;

    unordered_set<int>st;

    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }

    total = st.size();

    if(total%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
   
    return 0;
    

}
