#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int x;
        cin>>n>>x;

        int a[n];

        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int mi = 0;
        mi = max(mi,a[0]-0);

        for(int i =1;i<n;i++){
            mi = max(mi,a[i]-a[i-1]);
        }
        mi = max(mi,2*(x-a[n-1]));


        cout<<mi<<endl;



        
    }
    return 0;
}