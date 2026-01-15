#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool ok=true;

        for(int i=0;i+1<n;i++){
            if(a[i]>a[i+1]){
                ok=false;
                break;
            }
        }

        if(!ok){
            cout<<0<<"\n";
            continue;
        }

        long long mn=LLONG_MAX;
        for(int i=0;i+1<n;i++){
            mn=min(mn,a[i+1]-a[i]);
        }

        cout<<(mn/2+1)<<"\n";
    }
    return 0;
}
