#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int zero = 0;
    int maxl = 0;
    for(int i = 0; i < n; i++){
      if(a[i] == 0){
        zero++;
      }
      else{
        zero = 0;
      }
      maxl = max(maxl, zero);
    }
    cout << maxl << "\n";
  }
  return 0;
}