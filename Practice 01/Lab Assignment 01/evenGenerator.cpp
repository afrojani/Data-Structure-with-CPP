#include <bits/stdc++.h>
using namespace std;

vector<int> even_generator(vector<int> a)
{
    vector<int> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            b.push_back(a[i]);
        }
    }
    return b;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> even = even_generator(a);

    for (int i = 0; i < even.size(); i++)
    {
        cout << even[i] << " ";
    }
    return 0;
}