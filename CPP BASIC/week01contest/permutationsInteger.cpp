#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin >> n;
    if (n == 1)
        cout << 1 << "\n";
    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION"
             << "\n";
    }
    else if (n == 4)
        cout << 2 << " " << 4 << " " << 1 << " " << 3 << "\n";
    else if (n > 4)
    {
        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 0)
                cout << i << " ";
        }
        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 1)
                cout << i << " ";
        }
    }
    return 0;
}