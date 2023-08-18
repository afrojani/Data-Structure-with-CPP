#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int largest = input[0];
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, input[i]);
    }

    int arr[largest + 1];

    for (int i = 0; i <= largest; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        arr[input[i]]++;
    }

    for (int i = 0; i <= largest; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << i << " ";
        }
    }
    return 0;
}