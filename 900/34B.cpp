#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int m;
    cin>>n>>m;

    vector<int> v;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    int i =0;
    int s = 0;
    
    while(m>0  && v[i]<=0){
        s += v[i];
        m--;
        i++;
    }   

    s *= -1;

    cout<<s;
    return 0;
}