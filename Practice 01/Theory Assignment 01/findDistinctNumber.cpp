// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     sort(a.begin(), a.end());
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
//     int ans = 0;
//     cout << "\n";
//     for (int i = 0; i < n - 1; i++)
//     {
//         cout << "i " << a[i] << " ";
//         cout << "i-1 " << a[i + 1] << " ";
//         if (a[i + 1] != a[i])
//             ans++;
//     }
//     cout << "\n";
//     cout << ans;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 1;
    for (int i = 1; i < n; i++)
        if (a[i] != a[i - 1])
            ans++;
    cout << ans;
    return 0;
}
