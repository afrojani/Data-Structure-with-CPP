#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int idx = i;
        while (idx >= 1)
        {
            if (a[idx - 1] > a[idx])
            {
                swap(a[idx - 1], a[idx]);
                idx--;
            }
            else
            {
                break;
            }
            /*ekhane break na korle infinite loop e dhuke jabe.
            co\z jokhn tar sothik position e thakbe tokhn break kore dite hobe. */
        }
        cout << "Considering " << i << ": ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    cout << "After Sorting: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    return 0;
}

/*
memory complexity = O(n)
time complexity=
outer loop, O(n)
inner while loop how many times will run,
worst case e jodi number ekdom shuru te thake tahole i bar iterate kore nijer position e bosbe.
tahole 1+2+3+...+n-1 = n(n-1)/2= O(n^2)

so time complexity O(n^2)
*/