#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin >> n;

    vector<long long int> a;
    a.resize(n);

    for (long long int i = 1; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    long long int ans = 0;
    for (long long int i = 1; i <= n; i++)
    {
        if (i != a[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}