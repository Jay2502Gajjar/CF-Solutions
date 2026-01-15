#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s = "I hate";
    string x = "I love";
    string t = "that";
    string it = "it";

    string ans = "";

    for(int i =1;i<=n;i++){

        if(i == n){
            if(i%2 !=0){
                ans += s + " " + it;
            }
            else{
                ans += x + " " +it;
            }
        }   
        else{
            if(i%2 !=0){
                ans += s + " " + t +" ";
            }
            else{
                ans += x + " " +t+ " ";
            }

        }
    }

    cout<<ans;
    return 0;
}