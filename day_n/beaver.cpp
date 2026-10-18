#include <bits/stdc++.h>
using namespace std;

int main() {
    int t_testcases;
    cin >> t_testcases;

    while (t_testcases > 0) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> arr[i];
        }

        int beaver;
        cin >> beaver;

        vector<int> arr1(beaver);
        for (int i = 0; i < beaver; i++) {
            cin >> arr1[i];
        }

        sort(arr1.begin(), arr1.end());

        cout << arr1.size() - 1<<" ";

        for (int i = beaver - 1; i >0; i--) {
            cout << arr1[i]<<" ";
        }

        cout << endl;

        t_testcases--;
    }
}
