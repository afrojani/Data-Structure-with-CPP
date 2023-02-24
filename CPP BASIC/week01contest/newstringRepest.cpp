#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    long long int n = s.size();

    int k = 1, temp = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            k++;
        }
        else
        {
            k = 1;
        }
        if (k > temp)
        {
            temp = k;
        }
    }

    cout << temp << "\n";

    return 0;
}