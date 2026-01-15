#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    y = y+1;
    

    while(true){
        string s1 = to_string(y);
        unordered_set<char> s(s1.begin(),s1.end());

        if(s.size() == 4){
            break;
        }
        
        y = y+1;
        
        
    }
    cout<<y;

    return 0;
}