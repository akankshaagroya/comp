#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string a; cin >> a;
    int m; cin >> m;
    string b; cin >> b;
    string c; cin >> c;
    string pre = "";
    string post = "";
    for(int i = 0; i < m; i++ ){
      if(c[i] == 'V'){
        pre = b[i] + pre;

      }
      else{
        post = post + b[i];
      }
    }
    cout << pre + a + post << "\n";

  }
  return 0;
}