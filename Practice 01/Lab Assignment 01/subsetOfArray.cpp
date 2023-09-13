#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int k)
{
    int low = 0;
    int high = a.size() - 1;
    bool flag = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == k)
        {
            flag = 1;
            break;
        }

        if (a[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return flag;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        int find = binarySearch(b, a[i]);
        // cout << find << "\n";
        if (find == 0)
        {
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        cout << "YES"
             << "\n";
    }
    else if (f == 1)
    {
        cout << "NO"
             << "\n";
    }

    return 0;
}