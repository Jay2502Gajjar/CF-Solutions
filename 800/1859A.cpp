#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);

        for(int i = 0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        if(a[0] == a[n-1]){
            cout<<-1<<endl;
            continue;
        }

        int c = 0;
        while(c<n && a[c] == a[0]){
            c++;
        }

        cout<<c<<" "<<n-c<<endl;

        for(int i = 0;i<c;i++){
            cout<<a[i]<<" ";
        }

        for(int i = c;i<n;i++){
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
