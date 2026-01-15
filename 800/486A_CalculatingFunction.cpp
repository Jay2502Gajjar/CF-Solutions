#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    long long evenc = n / 2;
    long long oddc = (n + 1) / 2;

    long long sume = evenc*(evenc +1);
    long long sumo = oddc*oddc;

    cout<<sume-sumo;

    return 0;
}
