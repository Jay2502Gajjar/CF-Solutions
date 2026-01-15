#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;

        long long x[4] = {1, 1, n, n};
        long long y[4] = {1, m, 1, m};

        long long best = -1;
        long long a1, b1, a2, b2;

        for (int p = 0; p < 4; p++) {
            for (int q = 0; q < 4; q++) {

                long long d1 = llabs(i - x[p]) + llabs(j - y[p]);
                long long d2 = llabs(x[p] - x[q]) + llabs(y[p] - y[q]);
                long long d3 = llabs(i - x[q]) + llabs(j - y[q]);

                long long tot = d1 + d2 + d3;

                if (tot > best) {
                    best = tot;
                    a1 = x[p];
                    b1 = y[p];
                    a2 = x[q];
                    b2 = y[q];
                }
            }
        }

        cout << a1 << " " << b1 << " " << a2 << " " << b2 << "\n";
    }

    return 0;
}
