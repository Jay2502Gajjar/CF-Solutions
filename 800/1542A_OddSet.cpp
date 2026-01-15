#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
    int n;
    cin>>n;

    int odd=0;
    int even=0;

    int a[2*n];
    for(int i=0;i<2*n;i++){
        int num;
        cin>>num;

        if(num%2 == 0){
            even = even+1;
        }
        else{
            odd = odd+1;
        }
        a[i] = num;
    }

    if(even == odd){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    t--;
    cout<<endl;
}
    return 0;

}