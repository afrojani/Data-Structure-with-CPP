#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // string s;
    // cin >> s;
    char s[3];
    for (int i = 0; i < 3; i++)
        cin >> s[i];
    int flag = 0;
    if ((s[0] != s[1]) && (s[1] != s[2]) && (s[0] != s[2]))
        flag = 3;
    else if ((s[0] == s[1]) && (s[1] == s[2]) && (s[0] == s[2]))
        flag = 1;
    else
        flag = 2;
    // cout << flag << "\n";
    int ans = 0;
    if (flag == 1)
        ans = 1;
    if (flag == 2)
        ans = 3;
    if (flag == 3)
        ans = 6;

    cout << ans << "\n";
    return 0;
}