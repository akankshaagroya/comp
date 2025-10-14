#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int c1 = 0, c0 = 0;
        int n = s.size();
        for(char c : s){
            if(c == '1') c1++;
            else c0++;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
          if(s[i] == '0' && c1 > 0) {
            c1--;
            ans++;
          }
          else if (s[i] == '1' && c0 > 0) {
            c0--;
            ans++;
          }
          else{
            break;
          }
        }
        cout << n - ans << "\n";
    }
    return 0;
}