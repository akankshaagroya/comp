#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    long long n; cin >> n;
    int x = 0;
    long long ans=0;
    long long p=1;
    while(n>0){
      int d = n %3;
      long long cost;
      if(x==0) {
        cost=3;
      }
      else{
        cost = 3*p + x * (p/3);
        
      }
      ans +=  d * cost;
      n = n/3;
      x++;
      p *= 3;
    }
    cout << ans << "\n";
    
  }
}