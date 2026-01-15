#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ans = 0;
        int p = 1;

        while(p <= n){
            for(int d = 1; d <= 9; d++){
                if(d*p <= n){
                    ans++;
                }
            }
            p = p*10;
        }

        cout<<ans<<endl;
    }

    return 0;
}
