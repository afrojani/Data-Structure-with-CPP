#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin >> n;
    cout << n << " ";
    long long int a = n;
    while (n > 1)
    {

        if (a & 1)
        {
            a = (a * 3) + 1;
        }
        else
        {
            a = a / 2;
        }
        cout << a << " ";
        n = a;
    }
    return 0;
}