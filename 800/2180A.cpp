#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int l;
        int a;
        int b;
        cin>>l>>a>>b;

        vector<int> vis(l,0);

        int cur=a;



        while(vis[cur] == 0){
            vis[cur] = 1;
            cur = (cur+b)%l;
        }

        int m = 0;

        for(int i =l-1;i>=0;i--){

            if(vis[i] == 1){
                m = i;
                break;
            }
        }

        cout<<m<<endl;
    }

    return 0;
}
