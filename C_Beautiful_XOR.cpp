#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int a, b; 
        cin >> a >> b;
        vector<int> ops;

        for (int i = 0; i <= 30; ++i)
        {
            if (((1 << i) & a) ^ ((1 << i) & b))
            {
                ops.push_back((1 << i));
            }
        }

        if (ops.size() == 0 && a != b) {
            cout << -1 << "\n";
        } else {
            cout << ops.size() << "\n";
            for (int x : ops) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
