#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    string s;
    int position = 50;
    int zero_count = 0;

    while (cin >> s)
    {
        char direction = s[0];
        int value = stoi(s.substr(1));

        if (direction == 'L')
        {
            position = (position - value + 100) % 100;
        }
        else if (direction == 'R')
        {
            position = (position + value) % 100;
        }
        if (position == 0)
        {
            zero_count++;
        }
    }

    cout << zero_count << endl;

    return 0;
}
