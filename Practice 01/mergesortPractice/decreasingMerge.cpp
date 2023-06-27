#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int idx1 = 0;
    int idx2 = 0;
    vector<int> sorted_c;

    for (int i = 0; i < (n + m); i++)
    {
        if (idx1 == n)
        {
            sorted_c.push_back(b[idx2]);
            idx2++;
        }
        else if (idx2 == m)
        {
            sorted_c.push_back(a[idx1]);
            idx1++;
        }
        else if (a[idx1] > b[idx2])
        {
            sorted_c.push_back(a[idx1]);
            idx1++;
        }
        else
        {
            sorted_c.push_back(b[idx2]);
            idx2++;
        }
    }

    for (int i = 0; i < (n + m); i++)
    {
        cout << sorted_c[i] << " ";
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << "\n";
    // for (int i = 0; i < m; i++)
    // {
    //     cout << b[i] << " ";
    // }
    return 0;
}