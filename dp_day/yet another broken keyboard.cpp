#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<char> a(n), b(k);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }

    vector<int> dp(n, 0);

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                 dp[i] = 1;
                found = true;
                break;
            }
        }

        if (!found) {
            dp[i] = 0;
        }
    }

    int prev = 0, total = 0;
    int all=0;

    for (int i = 0; i < n; i++) {
        if (dp[i] == 0) {
            prev = 0;
        } else {
            total = prev + dp[i];
            prev = total;
            if(dp[i]){
                all+=total;
            }
        }
    }

    cout << all << '\n';

    return 0;
}
