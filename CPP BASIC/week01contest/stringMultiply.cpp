#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char s[3];
    for (int i = 0; i < 3; i++)
        cin >> s[i];
    int a = s[0] - 48;
    int b = s[2] - 48;
    int ans = a * b;
    cout << ans << "\n";
    return 0;
}