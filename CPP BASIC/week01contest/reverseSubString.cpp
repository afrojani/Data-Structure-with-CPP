#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int l, r;
    cin >> l >> r;
    string s;
    cin >> s;
    long long int n = s.size();

    string s1 = s.substr(l - 1, r - l + 1); /*kon position theke koyta character substring e jabe
     seta deya hoy parameter hisebe*/
    // cout << s1 << "\n";
    s.erase(l - 1, r - l + 1);
    /*kon position theke koyta character delete
    hobe seta deya hoy parameter hisebe*/
    // cout << s << "\n";
    reverse(s1.begin(), s1.end());
    // cout << s1 << "\n";
    s.insert(l - 1, s1);
    cout << s << "\n";
    return 0;
}