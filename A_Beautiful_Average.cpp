# include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        int max_val = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> a[i];  
            if(a[i] > max_val){
                max_val = a[i];
            }
        }
        cout << max_val << "\n";

        
    }
    return 0;
}