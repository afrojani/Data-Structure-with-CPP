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
    for (int pass = 0; pass < n; pass++)
    {
        int last = n - 1 - pass;
        /*ekhane pass biyog na korleo algorithm thik result dibe, jmeon ta C language e korsi.
        pass biyog korar karon holo jeta already sort hoye gese seta k ar compare na kora.
        ete time complexity valo ashe.
        jodio dui khetre i time complexity O(n^2)
        kintu etar khetre inner loop e sum ashe n*n-1/2
        */
        bool sorted = true; /*eta thakle j iteration er por sort hoye jabe tar por break hoye ber hoye jabe*/
        for (int j = 0; j <= last - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                sorted = false;
            }
        }
        if (sorted)
            break;
        cout << "After pass " << pass << ": ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    return 0;
}

// memory complexity= O(n);
/*
time complexity= for the outer loop O(n).
inner loop er jonno, while pass=0, the lopp iterates n-1 times,
pass=1, n-2;
pass=2, n-3;
.... pass= n-1, iteration will be 1.
so the series is 1+2+3...+n-3+n-2+n-1
which is equal to n*(n-1)/2 = n^2

So the inner loop complexity is O(n^2)
as n^2 dominates, so total time complexity of outer +inner loop will be O(n^2)
*/