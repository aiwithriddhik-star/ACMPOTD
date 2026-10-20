#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str;
    cin >> str;
 
    vector<char> para;
    int ans = 0;
 
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            para.push_back(str[i]);
        }
        else if (str[i] == ')') {
            if (para.size() > 0) {
                para.pop_back();
                ans += 2;
            }
        }
    }
 
    cout << ans;
    return 0;
}
