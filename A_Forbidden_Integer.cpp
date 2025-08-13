#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, x;
    cin >> n >> k >> x;
    int count = 0;
    vector<int> a;

    for(int i = 1; i < n; i++){
      if(i != x && i <= k){
        count += i;
        a.push_back(i);
        if(count == n){
          break;
        }
      }
    }
    if(count == k){
      cout << "YES" << "\n";
      cout << a.size() << "\n";
      for(int i = 0; i < n; i++){
      cout << a[i] << " ";
    }
    }
    else{
      cout << "NO" << "\n";
    }
  }
  return 0;
}