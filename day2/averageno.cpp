#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % n != 0) {
        cout << 0 << '\n';
        return 0;
    }

    long long target = sum / n;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << '\n';

    for (int i : ans) {
        cout << i << ' ';
    }

    cout << '\n';

    return 0;
}
