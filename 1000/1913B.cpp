#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int o = 0; 
        
        int z = 0;

        for(int i = 0;i<s.size();i++){
            if(s[i] == '1'){
                o++;
            }
            else{
                z++;
            }
        }

        int to = o;
        int tz = z;

        int uo = 0;
        int uz = 0;

        int n = s.size();
        int i = 0;
        int best = 0;

        while(i < n){
            if(s[i] == '1'){
                uo++;
            }
            else{
                uz++;
            }

            if(uo <= tz && uz <= to){
                best = i + 1;
            }

            i++;
        }

        cout<<n-best<<endl;
    }

    return 0;
}
