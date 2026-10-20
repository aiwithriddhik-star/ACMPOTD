#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        long long root = sqrt(x);

        if (root * root == x && isPrime(root))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
