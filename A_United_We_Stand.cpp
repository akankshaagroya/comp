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
    vector<int> b;
    vector<int> c;
    int bab = INT_MAX;
    for(int i = 0; i < n; i++){
      bab = min(a[i], bab);
    }
    for(int i = 0; i < n; i++){
      if(a[i] == bab){
        b.push_back(a[i]);
      }
      else{
        c.push_back(a[i]);
      }
    }
    if(c.size() == 0){
      cout << "-1" << "\n";
      continue;
    }
    cout << b.size() << " " << c.size() << "\n";
    
    for(int i = 0; i < b.size(); i++){
      cout << b[i] << " ";
    }
    cout << "\n";
    for(int i = 0; i < c.size(); i++){
      cout << c[i] << " ";
    }
    cout << "\n" ;
  }
  return 0;
}