#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    int low = 0, high = n - 1;
    int flag = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == k)
        {
            flag++;
        }
        if (a[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag >= 2)
    {
        cout << "YES\n";
    }
    else if (flag < 2)
    {
        cout << "NO\n";
    }

    return 0;
}