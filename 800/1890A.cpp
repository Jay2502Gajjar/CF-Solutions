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
        unordered_map<int,int> mp;

        for(int i =0;i<n;i++){
            mp[a[i]]++;
        }

        if(mp.size()>2){
            cout<<"NO"<<endl;
            continue;
        }
        else if(mp.size() == 1){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            vector<pair<int,int>> v (mp.begin(),mp.end());
            int d = abs(v[0].second - v[1].second);

            if(d<=1){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }

        }


    }

    return 0;
}