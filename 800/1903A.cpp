#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int k;
        cin>>n>>k;

        

        vector<int> v1(n);
        vector<int> v2(n);

        for(int i = 0;i < n;i++){
            cin>>v1[i];
        }

        v2 = v1;
        sort(v2.begin(),v2.end());

        if(v2 == v1){
            cout<<"YES"<<endl;
            
        }
        else if(k == 1 && k<n){
            cout<<"NO"<<endl;
            
        }
        else if(k == n){
            cout<<"YES"<<endl;
            
        }
        else if(k<n){
            cout<<"YES"<<endl;
        }





    }
    return 0;
}