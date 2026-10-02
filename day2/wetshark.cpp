#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long sum = 0;
    int odd=0;
    int minimumodd=INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if(a[i]%2!=0){
             odd+=1;
             minimumodd=min(a[i],minimumodd);
        }
        
    }
    
    

    if (odd % 2 != 0) {
        sum-=minimumodd;
    }

    cout<<sum;
    cout << '\n';

    return 0;
}
