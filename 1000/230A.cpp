#include <bits/stdc++.h>
using namespace std;


int main(){
    int s;
    int n;
    cin>>s>>n;

    vector<pair<int,int>> v;

    for(int i =0;i<n;i++){
        int x;
        int y;
        cin>>x>>y;
        v.push_back({x,y});

    }

    sort(v.begin(),v.end());
    int l = 0;

    for(int i =0;i<n;i++){
        if(s>v[i].first){
            s += v[i].second;
        }
        else{
            l = 1;
            break;
        }
    }

    if(l==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}