#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ara[n - 1];
    for (int i = 0; i < n - 1; i++)
    { // start the loop from 0
        cin >> ara[i];
    }

    int newAra[n + 1];

    for (int i = 1; i <= n; i++)
    {
        newAra[i] = 0;
    }

    for (int i = 0; i < n - 1; i++)
    { // start the loop from 0
        newAra[ara[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (newAra[i] == 0)
        {
            cout << i;
            break; // Once you find the missing number, you can break out of the loop
        }
    }

    return 0;
}
