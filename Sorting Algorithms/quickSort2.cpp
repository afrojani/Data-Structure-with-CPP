#include <bits/stdc++.h>
using namespace std;

vector<int> quicksort(vector<int> &a, int n)
{
    if (n <= 1)
        return a;

    int pivot = n / 2;

    vector<int> b, c;
    for (int i = 0; i < n; i++)
    {
        if (i == pivot)
            continue;
        if (a[i] <= a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    vector<int> sorted_b = quicksort(b, b.size());
    vector<int> sorted_c = quicksort(c, c.size());
    vector<int> sorted_a;
    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }

    sorted_a.push_back(a[pivot]);
    for (int i = 0; i < sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }

    return sorted_a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }

    vector<int> sorted_a = quicksort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << sorted_a[i] << " ";
    }
    cout << "\n";
    return 0;
}