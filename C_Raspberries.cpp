#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int count = INT_MAX;

    if(k == 4){
      int c = 0;
      for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
          c++;
        }
      }
      if(c >= 2){
        count = 0;
      }
      else{
        count = 2 - c;
      }
    }

    
    
    for(int i = 0; i < n; i++){
      int temp = 0;
      while(a[i] % k != 0){
        a[i]++;
        temp ++;
      }
      count = min(count, temp);
      
      
    }
    cout << count << "\n";
  }
  return 0;
}