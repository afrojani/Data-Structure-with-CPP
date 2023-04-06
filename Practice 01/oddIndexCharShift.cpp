#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && s[i] != 'z')
        {
            s[i] = s[i] + 1;
        }
        if (i % 2 == 0 && s[i] == 'z')
        {
            s[i] = s[i] - 25;
        }
    }

    cout << s << "\n";
    return 0;
}