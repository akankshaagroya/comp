#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    long long n; cin >> n;
    vector<int> a(n);
    for(long long i = 0; i < n; i++){
      cin >> a[i];
    }
    long long positive = 0; 
    long long negative = 0;
    for(long long i = 0; i < n; i++){
      if(a[i] == 1){
        positive++;
      }
      else{
        negative++;
      }
    }
    long long op = 0;
    while(positive < negative || negative % 2 == 1){
      op++;
      positive++;
      negative--;
    }
    cout << op << "\n";
  }
  return 0;
}