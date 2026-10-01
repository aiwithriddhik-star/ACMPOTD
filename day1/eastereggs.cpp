#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<string> v={"R", "O", "Y","G","B", "I","V"};
    int j=3;
    for(int i=7; i<=t;i++){
          if(j==7) j=3;
          v.push_back(v[j]);
          j++;

    }
    string s="";
    for(int i=0;i<t;i++){

        s+=v[i];
    }
    cout<<s;
    



     

}
