#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t>0){
        int a,b,c;
        cin>>a>>b>>c;

        if(a>=b && a>=c){
            if(b+c == a){
                cout<<"YES";
                
            }
            else{
                cout<<"NO";
                
                
            }
        }
        else if(b>=a && b>=c){
            if(c+a == b){
                cout<<"YES";
                
            }
            else{
                cout<<"NO";
                
                
            }

        }
        else if(c>=a && c>=b){
            if(a+b == c){
                cout<<"YES";
                
            }
            else{
                cout<<"NO";
                
                
            }

        }
        cout<<endl;
        t =t-1;
    }

    return 0;
}