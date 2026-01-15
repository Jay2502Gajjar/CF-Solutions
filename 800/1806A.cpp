#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        int c,d;
        cin>>a>>b>>c>>d;

        int ct=0;


        if(b>d){
            cout<<-1<<endl;
            continue;
        }
        

        while(b<d){
            b++;
            a++;
            ct++;
        }
        if(a<c){
            cout<<-1<<endl;
            continue;

        }

        while(a>c){
            a--;
            ct++;
        }

        cout<<ct<<endl;
    }
    return 0;
}