#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin >> t;

while (t--) {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;

    long long k = log2(n);

    long long no = 1LL << (k + 1);

    long long total = 2 * (no - 1);

    cout << sum - total << '\n';
}


}
