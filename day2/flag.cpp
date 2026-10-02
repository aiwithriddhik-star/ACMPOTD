#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin>>m;

   

    string t="";
    char prev;
    string output="YES";
    bool wrong=false;

    for (int i = 0; i < n; i++) {
        cin>>t;
        char first=t[0];
        
        
        
        if((i==0 || first!=prev) && (!wrong)){
           
           for (int j = 1; j < m; j++) {
            
            if(t[j]!=first){
                output="NO";
                wrong=true;
                break;
            }
            first=t[j];
            
        }
        prev=first;
            
        }
        else{
            if(i!=0){
            output="NO";
            break;}
        }
        
        
       
        
    }
     cout<< output;
     return 0;
}
