#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        char a[10][10];

        for(int i =0;i<10;i++){
            for(int j =0;j<10;j++){
                cin>>a[i][j];
            }
        }

        int t = 0;
        int b = 9;
        int l = 0;
        int r = 9;
        int c= 1;
        int ans = 0;

        while(t<= b&& l<= r){

            for(int j = l;j <= r;j++){
                
                if(a[t][j] == 'X'){
                    ans += c;
                }
            }   
            t++;

            for(int i = t;i<=b;i++){
                if(a[i][r] == 'X'){
                    ans += c;
                }

            }
   
            r--;

            if(t<=b){
                for(int j = r;j>=l;j--){
                    if(a[b][j] == 'X'){
                        ans += c;
                    }
                }
                   
                b--;
            }

            if(l<=r){
                for(int i = b;i>=t;i--){
                    if(a[i][l] == 'X'){
                        ans += c;
                    }
                }
                    
                l++;
            }

            c++;
        }

        cout<<ans<<endl;
    }

    return 0;
}