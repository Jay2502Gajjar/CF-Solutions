#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t>0) {
        long long n;
        cin>>n;
        cout<<n/10 + (n%10 == 9)<<endl;

        t = t-1;
    }
    return 0;
}
