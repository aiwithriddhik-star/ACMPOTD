#include <bits/stdc++.h>
using namespace std;

int main() {

vector<vector<string>> v;

      int n;
      int m;
      cin >> n;
      cin>> m; 
      v.resize(n, vector<string>(m));
      for(int i=0;i<n;i++){
          string x;
          cin >> x;
        for(int j=0;j<m;j++){
            
            
            
            v[i][j] = x[j];
      }
      }
      int top = 0;
      int bottom = n-1;
      int mtop = n-1;
      int mbottom = 0;
      int starl= m-1;
      int starr=0;
      bool tstar = 0;
      bool bstar = 0;
      while(top<=bottom){
          int sl=m-1;
          int sr=0;
          tstar = 0;
          bstar = 0;
        for(int i=0;i<m;i++){
            if (v[top][i] == "*"){
                tstar = 1;
                sl= i;
                break;

            }}
         for(int i=m-1;i>=0;i--){
            if (v[top][i] == "*"){
                tstar = 1;
                sr= i;
                break;

            }}
         for(int i=0;i<m;i++){
            if (v[bottom][i] == "*"){
                bstar = 1;
                sl= min(sl, i);
                break;

            }}
            for(int i=m-1;i>=0;i--){
                if (v[bottom][i] == "*"){
                    bstar = 1;
                    sr= max(sr, i);
                    break;
    }}
    if(tstar|| bstar){
    starl=min(starl, sl);
    starr=max(starr, sr);}
    if(tstar){
    mtop = min(mtop, top);
    mbottom = max(mbottom, top);
   }

if(bstar){
    mbottom = max(mbottom, bottom);
    mtop = min(mtop, bottom);
}
    
    top++;
    bottom--;
    
}


for(int i=mtop;i<=mbottom;i++){
      string str="";
    for(int j=starl;j<=starr;j++){
        
        str+= v[i][j];
    }
       cout<<str;
    
    cout << endl;
}



}
