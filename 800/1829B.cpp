#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }

        int c = 0;
        int m = 0;

        for(int i =0;i<n;i++){
            if(a[i] == 1){
                m = max(m,c);
                c = 0;
            }
            else{
                c++;
            }
        }
        m= max(m,c);

        cout<<m<<endl;
    }
    return 0;
}