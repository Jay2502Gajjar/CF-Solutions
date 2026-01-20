#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int c0 = 0;
        int c1 = 0;

        for(int i= 0;i<s.size();i++){
            if(s[i] == '1'){
                c1++;
            }
            else{
                c0++;
            }
        }

        if(c0 == 0 || c1 == 0){
            cout<<"NET"<<endl;
        }
        else{
            int n = 1 + min(c0,c1);

           
            if(n%2 == 0){
                cout<<"DA"<<endl;
            }
            else{
                cout<<"NET"<<endl;
            }
        }
    }
    return 0;
}