#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int c = 0;

        if(s != "YES" && s != "yes" && s != "yEs" && s != "yeS" && s != "yES" && s != "YeS" && s != "YeS" && s != "YEs" && s!= "Yes"){
            c= 1;
        }


        if(c==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}