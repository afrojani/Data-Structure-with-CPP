#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int gun = 1;
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 1)
        {
            gun = gun * a[i];
        }
    }

    cout << gun << "\n";
    return 0;
}