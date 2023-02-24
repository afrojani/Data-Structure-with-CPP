#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(i);
    }

    a.insert(a.begin() + 0, 100);
    a.insert(a.begin() + 2, 200);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}