#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        vector<string> v= {"00","25","50","75"};
        int m = INT_MAX;
        

        for(string x: v){
            int c = 0;

            int i = s.size()-1;

            while(s[i]!= x[1]){
                i--;
                c++;
            }
            i--;

            while(s[i]!= x[0]){
                i--;
                c++;
            }


            m = min(m,c);            
        }

        cout<<m<<endl;
    }

    return 0;
}