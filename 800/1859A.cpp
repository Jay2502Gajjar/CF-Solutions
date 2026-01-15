#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<long long>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long mn = *min_element(a.begin(), a.end());

        vector<long long>b, c;

        for(int i = 0; i < n; i++){
            if(a[i] == mn) b.push_back(a[i]);
            else c.push_back(a[i]);
        }

        if(c.empty()){
            cout << -1 << endl;
            continue;
        }

        long long g = c[0];
        for(int i = 1; i < c.size(); i++){
            g = gcd(g, c[i]);
        }

        if(g != mn){
            cout << -1 << endl;
            continue;
        }

        cout << b.size() << " " << c.size() << endl;
        for(auto x : b) cout << x << " ";
        cout << endl;
        for(auto x : c) cout << x << " ";
        cout << endl;
    }
}
