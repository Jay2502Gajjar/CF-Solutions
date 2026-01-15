#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    
    while(t--){
        string x1,x2;
        int p1,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;

        int l1=x1.size()+p1;
        int l2=x2.size()+p2;

        if(l1>l2){
            cout<<">\n";
            continue;
        }
        if(l1<l2){
            cout<<"<\n";
            continue;
        }

        int i=0;
        while(i<x1.size()||i<x2.size()){
            char a=(i<x1.size()?x1[i]:'0');
            char b=(i<x2.size()?x2[i]:'0');

            if(a>b){
                cout<<">\n";
                break;
            }
            if(a<b){
                cout<<"<\n";
                break;
            }
            i++;
        }

        if(i>=x1.size()&&i>=x2.size()){
            cout<<"=\n";
        }
    }
    return 0;
}
