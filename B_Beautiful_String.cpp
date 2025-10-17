#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int>index;
        
        for(int i = 0; i < n; i++){
          if(s[i] == '1'){
            index.push_back(i);

          }
        }
        int m = index.size();
        cout << m << "\n";
        for(int i = 0; i < m; i++){
          cout << index[i] + 1 << " ";
        }
        cout << "\n";

    }
    return 0;
}