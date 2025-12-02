#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    string s;
    int position = 50;
    long long zero_count = 0;

    while (cin >> s) {
        char direction = s[0];
        int value = stoi(s.substr(1));

        if (direction == 'L') {
            for (int i = 0; i < value; i++) {
                position--;
                if (position < 0) position = 99;
                if (position == 0) zero_count++;
            }
        } else {
            for (int i = 0; i < value; i++) {
                position++;
                if (position == 100) position = 0;
                if (position == 0) zero_count++;
            }
        }
    }

    cout << zero_count << endl;
    return 0;
}
