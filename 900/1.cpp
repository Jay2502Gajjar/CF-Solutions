#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;

        vector<int> ans(n, 0);
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int cover = 0;

        for(int i =n-1;i>=0;i--){
            cover = max(cover, a[i]);
            if(cover>0){
                ans[i] = 1;
                cover--;
            }
        }

        for(int i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }


        cout<<endl;

        t--;
    }


    return 0;
}
