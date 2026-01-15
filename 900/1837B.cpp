#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char ch = s[0];
        int i =1;
        int c = 1;
        int m =0;
        while(i<s.size()){
            if(s[i] == ch){
                c++;
            }
            else{
                ch = s[i];
                m = max(m,c);
                c=1;
            }

            i++;    
        }
        m = max(m,c);

        cout<<m+1<<endl;
    }
    return 0;
}