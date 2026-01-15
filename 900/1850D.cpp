#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int k;

        vector<int> a;
        cin>>n>>k;
        vector<int> aa;

        for(int i =0;i<n;i++){
            int d;
            cin>>d;
            a.push_back(d);
        }

        sort(a.begin(),a.end());

        int c=1;

        for(int i =1;i<a.size();i++){
            if(a[i]-a[i-1] <=k){
                c++;
            }
            else{
                aa.push_back(c);
                c = 1;
            }
        }
        aa.push_back(c);
        sort(aa.begin(),aa.end(),greater<int>());

        cout<<(n-aa[0])<<endl;

    }
    return 0;
}