#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    int b;
    cin>>a;
    cin>>b;

    int c = a+b;

    string as = to_string(a);
    string bs = to_string(b);
    string cs = to_string(c);

    string ta = "";
    string tb = "";
    string tc = "";

    for(int i =0;i<as.size();i++){
        if(as[i] != '0'){
            ta += as[i];
        }

    }
    for(int i =0;i<bs.size();i++){
        if(bs[i] != '0'){
            tb += bs[i];
        }

    }
    for(int i =0;i<cs.size();i++){
        if(cs[i] != '0'){
            tc += cs[i];
        }

    }

    a = stoi(ta);
    b = stoi(tb);
    c = stoi(tc);

    if(a+b == c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}