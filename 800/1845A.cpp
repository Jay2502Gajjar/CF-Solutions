#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        int k;
        int x;

        cin>>n>>k>>x;
        int s = 0;
        int c = 0;
        stack<int> st;

        while(k >= 1){
            if(k == x){
                k--;
                continue;
            }

            if(s+k <= n){
                s += k;
                c++;
                st.push(k);
            }
            else{
                k--;
            }
        }

        if(s == n){
            
            cout<<"YES"<<endl;
            cout<<c<<endl;

            while(!st.empty()){
                cout<<st.top()<<" ";
                st.pop();
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
