#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            
            
        }

        sort(a.begin(),a.end());
        int s = a.size();

        int i =0;
        int j =1;

        while(i<n-1){
            if(abs(a[i]-a[j]) <=1){
                s--;
                
            }
            i++;
            j++;
        }

        
        if(s==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        


        
    }

    return 0;
}