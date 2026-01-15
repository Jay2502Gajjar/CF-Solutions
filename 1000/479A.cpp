#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;

    
    

    int res1 = 0;

    res1 = max(a*b,a+b);

    res1 = max(res1*c,res1+c);

    int res2 = 0;

    res2 = max(b*c,b+c);
    res2 = max(res2*a,res2+a);

    cout<<max(res2,res1);


    
    return 0;
}